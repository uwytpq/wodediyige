const PptxGenJS = require('pptxgenjs');
const fs = require('fs');

const pptx = new PptxGenJS({ layout: 'LAYOUT_WIDE' });
pptx.title = '大美新疆';
pptx.author = 'AI Assistant';

const C = {
  darkBg: '0F172A',
  accent: '3B82F6',
  accent2: 'F59E0B',
  white: 'FFFFFF',
  lightGray: '94A3B8',
  midGray: '64748B',
  cardBg: '1E293B',
  warmWhite: 'F8FAFC',
  bodyText: 'E2E8F0',
};

// ============ SLIDE 1: Cover (with animated clouds GIF) ============
function makeCover() {
  const slide = pptx.addSlide();
  slide.background = { color: C.darkBg };

  // Animated GIF background
  slide.addMedia({
    type: 'gif',
    path: '/tmp/cloud_gif.gif',
    x: 0, y: 0, w: 13.33, h: 7.5,
  });

  // Dark overlay
  slide.addShape('rect', {
    x: 0, y: 0, w: 13.33, h: 7.5,
    fill: { color: C.darkBg, transparency: 55 },
  });

  // Top accent bar
  slide.addShape('rect', {
    x: 0, y: 0, w: 13.33, h: 0.12,
    fill: { color: C.accent },
  });

  // Left vertical gold stripe
  slide.addShape('rect', {
    x: 0.5, y: 1.6, w: 0.07, h: 3.0,
    fill: { color: C.accent2 },
  });

  // Main title
  slide.addText('大美新疆', {
    fontFace: '微软雅黑',
    fontSize: 76,
    bold: true,
    color: C.white,
    x: 0.8, y: 1.6, w: 10, h: 1.5,
  });

  // Subtitle
  slide.addText('中国西北的璀璨明珠', {
    fontFace: '微软雅黑',
    fontSize: 28,
    color: C.accent,
    x: 0.8, y: 3.1, w: 10, h: 0.7,
  });

  // Divider
  slide.addShape('rect', {
    x: 0.8, y: 3.9, w: 3, h: 0.05,
    fill: { color: C.accent2 },
  });

  // Description
  slide.addText('新疆维吾尔自治区风景介绍', {
    fontFace: '微软雅黑',
    fontSize: 16,
    color: C.lightGray,
    x: 0.8, y: 4.1, w: 10, h: 0.5,
  });

  // Decorative circles
  slide.addShape('ellipse', {
    x: 11.0, y: 0.4, w: 2.0, h: 2.0,
    fill: { color: C.accent, transparency: 80 },
    line: { color: C.accent, width: 1.5 },
  });
  slide.addShape('ellipse', {
    x: 9.8, y: 1.8, w: 1.3, h: 1.3,
    fill: { color: C.accent2, transparency: 85 },
    line: { color: C.accent2, width: 1 },
  });

  // Bottom bar
  slide.addShape('rect', {
    x: 0, y: 6.8, w: 13.33, h: 0.5,
    fill: { color: '1E293B', transparency: 30 },
  });
  slide.addText('新疆维吾尔自治区  ·  166.49万平方公里  ·  多民族聚居', {
    fontFace: '微软雅黑',
    fontSize: 13,
    color: C.lightGray,
    align: 'center',
    x: 0, y: 6.8, w: 13.33, h: 0.5,
  });

  return slide;
}

// ============ SLIDE 2: Overview ============
function makeOverview() {
  const slide = pptx.addSlide();
  slide.background = { color: C.warmWhite };

  slide.addShape('rect', {
    x: 0, y: 0, w: 13.33, h: 1.1,
    fill: { color: C.darkBg },
  });
  slide.addText('新疆概览', {
    fontFace: '微软雅黑',
    fontSize: 32,
    bold: true,
    color: C.white,
    x: 0.5, y: 0, w: 10, h: 1.1,
  });
  slide.addText('02 / 08', {
    fontFace: '微软雅黑',
    fontSize: 14,
    color: C.midGray,
    x: 12, y: 0, w: 1.2, h: 1.1,
  });

  slide.addShape('rect', {
    x: 0, y: 1.1, w: 0.08, h: 5.2,
    fill: { color: C.accent },
  });

  const stats = [
    ['166.49万km²', '陆地面积'],
    ['13个', '民族'],
    ['2000+', '年历史'],
    ['TOP3', '瓜果之乡'],
  ];
  stats.forEach(([val, label], i) => {
    const x = 0.5 + i * 3.2;
    slide.addShape('rect', {
      x, y: 1.35, w: 2.8, h: 1.3,
      fill: { color: C.darkBg },
    });
    slide.addText(val, {
      fontFace: '微软雅黑',
      fontSize: 26,
      bold: true,
      color: C.accent,
      align: 'center', x, y: 1.4, w: 2.8, h: 0.8,
    });
    slide.addText(label, {
      fontFace: '微软雅黑',
      fontSize: 13,
      color: C.lightGray,
      align: 'center', x, y: 2.1, w: 2.8, h: 0.4,
    });
  });

  const bullets = [
    '地处亚欧大陆腹地，天山山脉将新疆分为南疆与北疆，拥有冰川、湖泊、沙漠、草原、雪山等多种地貌',
    '著名景点：喀纳斯湖、赛里木湖、天山、吐鲁番、喀什老城、塔克拉玛干沙漠',
    '属温带大陆性气候，日照时间长，昼夜温差大，素有"瓜果之乡"美誉',
    '多民族聚居地区，维吾尔、汉、哈萨克、回等13个民族和谐共处',
  ];
  bullets.forEach((b, i) => {
    slide.addShape('ellipse', {
      x: 0.5, y: 2.95 + i * 0.72, w: 0.15, h: 0.15,
      fill: { color: C.accent },
    });
    slide.addText(b, {
      fontFace: '微软雅黑',
      fontSize: 15,
      color: '1E293B',
      x: 0.8, y: 2.8 + i * 0.72, w: 12.2, h: 0.65,
    });
  });

  return slide;
}

// ============ Image slides with GIF accent ============
function makeSlideImageFull(title, subtitle, location, imagePath, gifPath, description, pageNum) {
  const slide = pptx.addSlide();
  slide.background = { color: C.darkBg };

  // Static image
  if (imagePath && fs.existsSync(imagePath)) {
    slide.addImage({
      path: imagePath,
      x: 0, y: 0, w: 13.33, h: 7.5,
    });
    slide.addShape('rect', {
      x: 0, y: 0, w: 13.33, h: 7.5,
      fill: { color: C.darkBg, transparency: 50 },
    });
  }

  // GIF accent (small overlay)
  if (gifPath && fs.existsSync(gifPath)) {
    slide.addMedia({
      type: 'gif',
      path: gifPath,
      x: 10.8, y: 0.2, w: 2.3, h: 1.5,
    });
  }

  slide.addShape('rect', {
    x: 0, y: 0, w: 13.33, h: 0.08,
    fill: { color: C.accent },
  });

  slide.addShape('rect', {
    x: 0.5, y: 0.5, w: 6.5, h: 1.2,
    fill: { color: C.darkBg, transparency: 35 },
  });
  slide.addText(title, {
    fontFace: '微软雅黑',
    fontSize: 44,
    bold: true,
    color: C.white,
    x: 0.7, y: 0.5, w: 6, h: 0.9,
  });
  if (subtitle) {
    slide.addText(subtitle, {
      fontFace: '微软雅黑',
      fontSize: 14,
      color: C.accent2,
      x: 0.7, y: 1.3, w: 6, h: 0.4,
    });
  }

  slide.addShape('rect', {
    x: 0.5, y: 6.5, w: 3.5, h: 0.6,
    fill: { color: C.accent },
  });
  slide.addText('📍 ' + location, {
    fontFace: '微软雅黑',
    fontSize: 14,
    color: C.white,
    x: 0.6, y: 6.5, w: 3.3, h: 0.6,
    valign: 'middle',
  });

  slide.addText(pageNum + ' / 08', {
    fontFace: '微软雅黑',
    fontSize: 13,
    color: C.midGray,
    align: 'right',
    x: 11.5, y: 6.5, w: 1.6, h: 0.6,
    valign: 'middle',
  });

  if (description) {
    slide.addShape('rect', {
      x: 4.5, y: 4.6, w: 8.5, h: 1.6,
      fill: { color: C.darkBg, transparency: 25 },
    });
    slide.addText(description, {
      fontFace: '微软雅黑',
      fontSize: 12,
      color: C.bodyText,
      x: 4.7, y: 4.65, w: 8.1, h: 1.5,
    });
  }

  return slide;
}

function makeSlideImageLeft(title, subtitle, location, imagePath, gifPath, description, pageNum) {
  const slide = pptx.addSlide();
  slide.background = { color: C.darkBg };

  if (imagePath && fs.existsSync(imagePath)) {
    slide.addImage({
      path: imagePath,
      x: 0, y: 0, w: 8, h: 7.5,
    });
    slide.addShape('rect', {
      x: 6.5, y: 0, w: 1.5, h: 7.5,
      fill: { color: C.darkBg, transparency: 65 },
    });
  } else {
    slide.addShape('rect', {
      x: 0, y: 0, w: 8, h: 7.5,
      fill: { color: C.cardBg },
    });
  }

  slide.addShape('rect', {
    x: 8, y: 0, w: 5.33, h: 7.5,
    fill: { color: C.darkBg },
  });
  slide.addShape('rect', {
    x: 8, y: 0, w: 0.06, h: 7.5,
    fill: { color: C.accent },
  });
  slide.addShape('rect', {
    x: 8, y: 0, w: 5.33, h: 0.08,
    fill: { color: C.accent },
  });

  // GIF in corner of right panel
  if (gifPath && fs.existsSync(gifPath)) {
    slide.addMedia({
      type: 'gif',
      path: gifPath,
      x: 10.6, y: 0.2, w: 2.5, h: 1.5,
    });
  }

  slide.addText('📍 ' + location, {
    fontFace: '微软雅黑',
    fontSize: 13,
    color: C.accent2,
    x: 8.3, y: 0.4, w: 4.8, h: 0.4,
  });
  slide.addText(title, {
    fontFace: '微软雅黑',
    fontSize: 36,
    bold: true,
    color: C.white,
    x: 8.3, y: 0.9, w: 4.8, h: 0.9,
  });
  if (subtitle) {
    slide.addText(subtitle, {
      fontFace: '微软雅黑',
      fontSize: 13,
      color: C.lightGray,
      x: 8.3, y: 1.75, w: 4.8, h: 0.4,
    });
  }
  slide.addShape('rect', {
    x: 8.3, y: 2.3, w: 1.5, h: 0.04,
    fill: { color: C.accent2 },
  });
  if (description) {
    slide.addText(description, {
      fontFace: '微软雅黑',
      fontSize: 13,
      color: C.bodyText,
      x: 8.3, y: 2.5, w: 4.8, h: 4.5,
    });
  }
  slide.addText(pageNum + ' / 08', {
    fontFace: '微软雅黑',
    fontSize: 13,
    color: C.midGray,
    align: 'right',
    x: 11.5, y: 6.7, w: 1.6, h: 0.5,
  });

  return slide;
}

function makeSlideImageTop(title, subtitle, location, imagePath, gifPath, description, pageNum) {
  const slide = pptx.addSlide();
  slide.background = { color: C.darkBg };

  if (imagePath && fs.existsSync(imagePath)) {
    slide.addImage({
      path: imagePath,
      x: 0, y: 0, w: 13.33, h: 3.2,
    });
    slide.addShape('rect', {
      x: 0, y: 2.6, w: 13.33, h: 0.6,
      fill: { color: C.darkBg },
    });
  } else {
    slide.addShape('rect', {
      x: 0, y: 0, w: 13.33, h: 3.2,
      fill: { color: C.cardBg },
    });
  }

  // GIF overlay on top image
  if (gifPath && fs.existsSync(gifPath)) {
    slide.addMedia({
      type: 'gif',
      path: gifPath,
      x: 10.8, y: 0.1, w: 2.3, h: 1.4,
    });
  }

  slide.addShape('rect', {
    x: 0, y: 3.2, w: 13.33, h: 4.3,
    fill: { color: C.darkBg },
  });
  slide.addShape('rect', {
    x: 0, y: 3.2, w: 0.06, h: 4.3,
    fill: { color: C.accent },
  });

  slide.addText(title, {
    fontFace: '微软雅黑',
    fontSize: 34,
    bold: true,
    color: C.white,
    x: 0.5, y: 3.35, w: 8, h: 0.8,
  });
  slide.addText('📍 ' + location + (subtitle ? '  ·  ' + subtitle : ''), {
    fontFace: '微软雅黑',
    fontSize: 13,
    color: C.accent2,
    x: 0.5, y: 4.05, w: 12.5, h: 0.4,
  });
  slide.addShape('rect', {
    x: 0.5, y: 4.55, w: 2, h: 0.04,
    fill: { color: C.accent },
  });
  if (description) {
    slide.addText(description, {
      fontFace: '微软雅黑',
      fontSize: 13,
      color: C.bodyText,
      x: 0.5, y: 4.7, w: 12.5, h: 2.6,
    });
  }
  slide.addText(pageNum + ' / 08', {
    fontFace: '微软雅黑',
    fontSize: 13,
    color: C.midGray,
    align: 'right',
    x: 11.5, y: 6.7, w: 1.6, h: 0.5,
  });

  return slide;
}

// ============ Closing Slide ============
function makeClosing() {
  const slide = pptx.addSlide();
  slide.background = { color: C.darkBg };

  // Animated GIF as background
  slide.addMedia({
    type: 'gif',
    path: '/tmp/cloud_gif.gif',
    x: 0, y: 0, w: 13.33, h: 7.5,
  });
  slide.addShape('rect', {
    x: 0, y: 0, w: 13.33, h: 7.5,
    fill: { color: C.darkBg, transparency: 60 },
  });

  // Decorative circles
  slide.addShape('ellipse', {
    x: -0.5, y: 3.5, w: 3, h: 3,
    fill: { color: C.accent, transparency: 80 },
  });
  slide.addShape('ellipse', {
    x: 10.5, y: -0.5, w: 3.5, h: 3.5,
    fill: { color: C.accent2, transparency: 83 },
  });
  slide.addShape('ellipse', {
    x: 5, y: 5.5, w: 2, h: 2,
    fill: { color: C.accent, transparency: 88 },
  });

  slide.addShape('rect', {
    x: 0, y: 0, w: 13.33, h: 0.1,
    fill: { color: C.accent },
  });

  slide.addText('谢谢观看', {
    fontFace: '微软雅黑',
    fontSize: 64,
    bold: true,
    color: C.white,
    align: 'center',
    x: 0, y: 2.2, w: 13.33, h: 1.2,
  });

  slide.addShape('rect', {
    x: 5.5, y: 3.5, w: 2.3, h: 0.05,
    fill: { color: C.accent2 },
  });

  slide.addText('新疆——一生必去的远方', {
    fontFace: '微软雅黑',
    fontSize: 20,
    color: C.accent,
    align: 'center',
    x: 0, y: 3.7, w: 13.33, h: 0.6,
  });

  slide.addShape('rect', {
    x: 0, y: 6.8, w: 13.33, h: 0.5,
    fill: { color: '1E293B', transparency: 30 },
  });
  slide.addText('大美新疆  ·  风景介绍', {
    fontFace: '微软雅黑',
    fontSize: 13,
    color: C.midGray,
    align: 'center',
    x: 0, y: 6.8, w: 13.33, h: 0.5,
  });

  return slide;
}

// ============ BUILD ============
makeCover();
makeOverview();

makeSlideImageFull(
  '喀纳斯湖',
  '国家5A级旅游景区  ·  人间净土  ·  变色湖',
  '阿勒泰地区布尔津县',
  '/tmp/xj_mountains.jpg',
  '/tmp/sunset.gif',
  '喀纳斯湖是中国最深的高山淡水湖，因湖水随季节和天气变化呈现不同颜色而得名"变色湖"。湖畔生活着神秘的图瓦人，保留着古老的游牧文化。',
  '03'
);

makeSlideImageLeft(
  '赛里木湖',
  '大西洋最后一滴眼泪  ·  国家5A级旅游景区',
  '博尔塔拉蒙古自治州',
  '/tmp/lake1.jpg',
  '/tmp/waves.gif',
  '赛里木湖位于博尔塔拉蒙古自治州，是新疆海拔最高、面积最大的高山湖泊。因其是大西洋暖湿气流最远到达的地方，故有"大西洋最后一滴眼泪"之美誉。湖畔草原辽阔，每年夏季野花盛开，美不胜收。',
  '04'
);

makeSlideImageTop(
  '天山山脉',
  '世界自然遗产  ·  横贯新疆中部的巨龙',
  '新疆中部',
  '/tmp/tianshan2.jpg',
  '/tmp/cloud_gif.gif',
  '天山山脉横贯新疆中部，全长2500公里，是世界上最大的独立纬向山系。博格达峰海拔5445米，终年积雪。壮丽的雪山、冰川与山麓的草原、森林共同构成了天山独特的垂直自然景观带。',
  '05'
);

makeSlideImageFull(
  '吐鲁番盆地',
  '中国最低点  ·  火焰山  ·  葡萄沟',
  '吐鲁番市',
  '/tmp/snow1.jpg',
  '/tmp/sunset.gif',
  '吐鲁番盆地是中国地势最低的地方，也是中国最炎热的地方。火焰山因《西游记》闻名于世，夏季地表温度可达80°C。葡萄沟盛产葡萄，以晾制葡萄干著称。',
  '06'
);

makeSlideImageLeft(
  '喀什老城',
  '国家5A级旅游景区  ·  千年丝路明珠',
  '喀什地区喀什市',
  '/tmp/xj_meadow.jpg',
  '/tmp/waves.gif',
  '喀什老城是新疆最古老的城市之一，已有2000多年历史。老城街巷纵横交错，建筑融合了伊斯兰风格与维吾尔族特色。艾提尕尔清真寺是新疆最大的清真寺。',
  '07'
);

makeClosing();

const outPath = '/home/admin/.openclaw/media/qqbot/downloads/新疆风景介绍_动态版.pptx';
pptx.writeFile({ fileName: outPath })
  .then(() => console.log('Done: ' + outPath + ' | size: ' + fs.statSync(outPath).size))
  .catch(e => { console.error(e); process.exit(1); });
