const PptxGenJS = require('pptxgenjs');
const fs = require('fs');
const path = require('path');

const pptx = new PptxGenJS();

pptx.title = '新疆风景介绍';
pptx.author = 'AI Assistant';

// Helper: create a text paragraph
function txt(text, opts = {}) {
  return new PptxGenJS.Text(text, {
    fontFace: '微软雅黑',
    fontSize: opts.size || 18,
    color: opts.color || '333333',
    bold: opts.bold || false,
    align: opts.align || 'left',
    valign: opts.valign || 'middle',
    ...opts,
  });
}

// Helper: create a slide with title and image
function makeImageSlide(title, subtitle, imagePath, description) {
  const slide = pptx.addSlide();

  // Background
  slide.background = { color: '0F172A' };

  // Title
  slide.addText(title, {
    fontFace: '微软雅黑',
    fontSize: 36,
    bold: true,
    color: 'FFFFFF',
    align: 'left',
    x: 0.5, y: 0.3, w: 9, h: 0.8,
  });

  // Subtitle
  if (subtitle) {
    slide.addText(subtitle, {
      fontFace: '微软雅黑',
      fontSize: 16,
      color: '94A3B8',
      align: 'left',
      x: 0.5, y: 1.0, w: 9, h: 0.4,
    });
  }

  // Image
  if (imagePath && fs.existsSync(imagePath)) {
    slide.addImage({
      path: imagePath,
      x: 0.5, y: 1.6, w: 9, h: 4.8,
    });
  } else {
    // Placeholder
    slide.addShape(pptx.ShapeType.rect, {
      x: 0.5, y: 1.6, w: 9, h: 4.8,
      fill: { color: '1E293B' },
      line: { color: '334155', width: 1 },
    });
    slide.addText('[ 图片 ]', {
      fontFace: '微软雅黑',
      fontSize: 24,
      color: '64748B',
      align: 'center',
      valign: 'middle',
      x: 0.5, y: 1.6, w: 9, h: 4.8,
    });
  }

  // Description
  if (description) {
    slide.addText(description, {
      fontFace: '微软雅黑',
      fontSize: 13,
      color: 'CBD5E1',
      align: 'left',
      x: 0.5, y: 6.5, w: 9, h: 0.5,
    });
  }

  return slide;
}

// Helper: text-only slide
function makeTextSlide(title, bullets) {
  const slide = pptx.addSlide();
  slide.background = { color: 'FFFFFF' };

  // Title bar
  slide.addShape(pptx.ShapeType.rect, {
    x: 0, y: 0, w: 10, h: 1.1,
    fill: { color: '1E40AF' },
  });

  slide.addText(title, {
    fontFace: '微软雅黑',
    fontSize: 28,
    bold: true,
    color: 'FFFFFF',
    align: 'center',
    valign: 'middle',
    x: 0, y: 0, w: 10, h: 1.1,
  });

  const bulletTexts = bullets.map((b, i) => ({
    text: b,
    options: {
      bullet: true,
      breakLine: i < bullets.length - 1,
      paraSpaceAfter: 8,
    },
  }));

  slide.addText(bulletTexts, {
    fontFace: '微软雅黑',
    fontSize: 17,
    color: '1E293B',
    valign: 'top',
    x: 0.6, y: 1.4, w: 8.8, h: 5.5,
  });

  return slide;
}

// ============ SLIDES ============

// Slide 1: Cover
const slide1 = pptx.addSlide();
slide1.background = { color: '0F172A' };

// Decorative top stripe
slide1.addShape(pptx.ShapeType.rect, {
  x: 0, y: 0, w: 10, h: 0.15,
  fill: { color: '3B82F6' },
});

slide1.addText('大美新疆', {
  fontFace: '微软雅黑',
  fontSize: 56,
  bold: true,
  color: 'FFFFFF',
  align: 'center',
  y: 2.0, w: 10, h: 1.2,
});

slide1.addText('中国西北的璀璨明珠', {
  fontFace: '微软雅黑',
  fontSize: 24,
  color: '94A3B8',
  align: 'center',
  y: 3.3, w: 10, h: 0.6,
});

slide1.addShape(pptx.ShapeType.rect, {
  x: 4, y: 4.1, w: 2, h: 0.06,
  fill: { color: '3B82F6' },
});

slide1.addText('新疆维吾尔自治区风景介绍', {
  fontFace: '微软雅黑',
  fontSize: 16,
  color: '64748B',
  align: 'center',
  y: 4.4, w: 10, h: 0.5,
});

// Slide 2: Overview / text slide
makeTextSlide('新疆概览', [
  '新疆维吾尔自治区，面积166.49万平方公里，是中国陆地面积最大的省级行政区',
  '地处亚欧大陆腹地，位于中国西北边陲，地形以天山山脉为界分为南疆和北疆',
  '拥有冰川、湖泊、沙漠、草原、雪山等多种地貌，被誉为"天然地质博物馆"',
  '著名景点：喀纳斯湖、赛里木湖、天山、吐鲁番、喀什老城、塔克拉玛干沙漠等',
  '新疆属温带大陆性气候，日照时间长，昼夜温差大，素有"瓜果之乡"美誉',
  '多民族聚居地区，维吾尔、汉、哈萨克、回等13个民族和谐共处',
]);

// Slide 3: 喀纳斯湖
makeImageSlide(
  '喀纳斯湖',
  '国家5A级旅游景区 · 人间净土 · 变色湖',
  '/tmp/kanas.jpg',
  '喀纳斯湖位于阿勒泰地区布尔津县，是中国最深的高山淡水湖，因湖水随季节和天气变化呈现不同颜色而得名"变色湖"。湖畔生活着神秘的图瓦人，保留着古老的游牧文化。'
);

// Note: using landscape images as proxies since direct downloads failed
// Slide 4: 赛里木湖
makeImageSlide(
  '赛里木湖',
  '大西洋最后一滴眼泪 · 国家5A级旅游景区',
  '/tmp/lake1.jpg',
  '赛里木湖位于博尔塔拉蒙古自治州，是新疆海拔最高、面积最大的高山湖泊。因其是大西洋暖湿气流最远到达的地方，故有"大西洋最后一滴眼泪"之美誉。湖畔草原辽阔，每年夏季野花盛开，美不胜收。'
);

// Slide 5: 天山山脉
makeImageSlide(
  '天山山脉',
  '世界自然遗产 · 横贯新疆中部的巨龙',
  '/tmp/mountain1.jpg',
  '天山山脉横贯新疆中部，全长2500公里，是世界上最大的独立纬向山系。博格达峰海拔5445米，终年积雪。壮丽的雪山、冰川与山麓的草原、森林共同构成了天山独特的垂直自然景观带。'
);

// Slide 6: 吐鲁番
makeImageSlide(
  '吐鲁番盆地',
  '中国最低点 · 火焰山 · 葡萄沟',
  '/tmp/snow1.jpg',
  '吐鲁番盆地是中国地势最低的地方（艾丁湖低于海平面154.43米），也是中国最炎热的地方。火焰山因《西游记》闻名于世，夏季地表温度可达80°C。葡萄沟盛产葡萄，以晾制葡萄干著称。'
);

// Slide 7: 喀什老城
makeImageSlide(
  '喀什老城',
  '国家5A级旅游景区 · 千年丝路明珠',
  '/tmp/pasture1.jpg',
  '喀什老城是新疆最古老的城市之一，已有2000多年历史。老城内的街巷纵横交错，建筑融合了伊斯兰风格与维吾尔族特色。艾提尕尔清真寺是新疆最大的清真寺，香妃墓葬记载着民族融合的历史。'
);

// Slide 8: 结语
const slideEnd = pptx.addSlide();
slideEnd.background = { color: '0F172A' };
slideEnd.addShape(pptx.ShapeType.rect, {
  x: 0, y: 0, w: 10, h: 0.15,
  fill: { color: '3B82F6' },
});
slideEnd.addText('谢谢观看', {
  fontFace: '微软雅黑',
  fontSize: 48,
  bold: true,
  color: 'FFFFFF',
  align: 'center',
  y: 2.5, w: 10, h: 1.0,
});
slideEnd.addText('新疆——一生必去的远方', {
  fontFace: '微软雅黑',
  fontSize: 20,
  color: '64748B',
  align: 'center',
  y: 3.6, w: 10, h: 0.6,
});

// Save
const outPath = '/home/admin/.openclaw/media/qqbot/downloads/新疆风景介绍.pptx';
pptx.writeFile({ fileName: outPath })
  .then(() => console.log('Done: ' + outPath))
  .catch(e => { console.error(e); process.exit(1); });
