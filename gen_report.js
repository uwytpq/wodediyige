const {
  Document, Packer, Paragraph, TextRun, AlignmentType, Table,
  TableRow, TableCell, WidthType, BorderStyle, PageBreak,
  ShadingType, convertInchesToTwip
} = require('docx');
const fs = require('fs');

const FANGSONG = '仿宋';
const HEITI = '黑体';

function p(options) { return new Paragraph(options); }

function textRun(text, opts = {}) {
  return new TextRun({ text, font: FANGSONG, size: 22, ...opts });
}

function coverTitle(text, size = 36) {
  return new Paragraph({
    alignment: AlignmentType.CENTER,
    spacing: { before: 800, after: 400 },
    children: [new TextRun({ text, bold: true, size, font: FANGSONG })],
  });
}

function infoTable(rows) {
  return new Table({
    width: { size: 100, type: WidthType.PERCENTAGE },
    rows: rows.map(([label, value]) =>
      new TableRow({
        children: [
          new TableCell({
            width: { size: 30, type: WidthType.PERCENTAGE },
            shading: { fill: 'F0F0F0', type: ShadingType.CLEAR },
            margins: { top: 80, bottom: 80, left: 120, right: 120 },
            children: [new Paragraph({
              alignment: AlignmentType.CENTER,
              children: [new TextRun({ text: label, size: 24, font: FANGSONG })],
            })],
          }),
          new TableCell({
            width: { size: 70, type: WidthType.PERCENTAGE },
            margins: { top: 80, bottom: 80, left: 120, right: 120 },
            children: [new Paragraph({
              alignment: AlignmentType.LEFT,
              children: [new TextRun({ text: value, size: 24, font: FANGSONG })],
            })],
          }),
        ],
      })
    ),
  });
}

function taskTitle(text) {
  return new Paragraph({
    alignment: AlignmentType.CENTER,
    spacing: { before: 400, after: 200 },
    shading: { fill: '1F4E79', type: ShadingType.CLEAR },
    children: [
      new TextRun({ text: '  ' + text + '  ', bold: true, color: 'FFFFFF', size: 28, font: HEITI }),
    ],
  });
}

function sectionTitle(text) {
  return new Paragraph({
    spacing: { before: 200, after: 100 },
    children: [new TextRun({ text, bold: true, size: 24, font: HEITI })],
  });
}

function bodyText(text, indent = true) {
  return new Paragraph({
    alignment: AlignmentType.JUSTIFIED,
    spacing: { before: 60, after: 60, line: 360, lineRule: 'auto' },
    indent: indent ? { firstLine: 480 } : { left: 0 },
    children: [new TextRun({ text, size: 22, font: FANGSONG })],
  });
}

function photoCell(label) {
  return new TableCell({
    width: { size: 50, type: WidthType.PERCENTAGE },
    margins: { top: 80, bottom: 80, left: 80, right: 80 },
    children: [
      new Paragraph({
        alignment: AlignmentType.CENTER,
        spacing: { before: 60, after: 60 },
        border: {
          top: { style: BorderStyle.DASHED, size: 6, color: '999999' },
          bottom: { style: BorderStyle.DASHED, size: 6, color: '999999' },
          left: { style: BorderStyle.DASHED, size: 6, color: '999999' },
          right: { style: BorderStyle.DASHED, size: 6, color: '999999' },
        },
        shading: { fill: 'F5F5F5', type: ShadingType.CLEAR },
        children: [
          new TextRun({ text: '[ ' + label + ' ]', size: 20, color: '888888', font: FANGSONG, italics: true }),
        ],
      }),
    ],
  });
}

function photoTable(rows) {
  return new Table({
    width: { size: 100, type: WidthType.PERCENTAGE },
    rows: rows.map(cells =>
      new TableRow({ children: cells.map(c => photoCell(c)) })
    ),
  });
}

function pageBreak() { return new Paragraph({ children: [new PageBreak()] }); }

// ====== 封面 ======
const cover = [
  coverTitle('牡丹江师范学院', 36),
  coverTitle('《中国近现代史纲要》学生实践手册', 32),
  coverTitle('学期：2025-2026-2', 24),
  p({ spacing: { before: 200, after: 200 }, children: [] }),
  infoTable([
    ['学    院', '_______________________'],
    ['年级专业班级', '_______________________'],
    ['姓    名', '_______________________'],
    ['学    号', '_______________________'],
    ['联系电话', '_______________________'],
    ['指导教师', '_______________________'],
  ]),
  pageBreak(),
];

// ====== 任务一 ======
const task1 = [
  taskTitle('一、学与研——中国近现代史经典著作研讨会'),
  sectionTitle('【图片展示区】'),
  photoTable([
    ['图片1-1', '图片1-2'],
    ['图片1-3', '图片1-4（可选）'],
  ]),
  sectionTitle('【内容介绍与心得体会】'),
  bodyText('一、读书研讨会基本情况'),
  bodyText('本次中国近现代史经典著作研讨会由本人所在学习小组（共4人）于2026年4月期间共同完成。我们选取了《红岩》作为主要研读书目，该书以真实的历史事件为背景，描写了中华人民共和国成立前后，在国民党反动统治下的重庆，以许云峰、江姐为代表的革命志士与敌人进行顽强斗争的悲壮事迹。'),
  bodyText('研讨会共计开展三次集中阅读与讨论活动。第一次活动主要进行章节通读与人物梳理；第二次活动围绕"信仰的力量"这一主题进行深入讨论；第三次活动则结合当下时代背景，探讨如何传承红岩精神。'),
  bodyText('二、小组研讨过程'),
  bodyText('在小组讨论中，每位成员均围绕书中核心人物发表了见解。江姐在狱中坚持斗争、绝不投降的坚定信仰令大家深受触动；许云峰以超凡的智慧与胆识与敌人周旋，展现了共产党员的钢铁意志；小萝卜头在狱中仍然渴望知识的场景，让每一位组员为之动容。'),
  bodyText('通过讨论，我们形成以下共识：红岩精神的本质是坚定的理想信念与不屈不挠的斗争精神，这种精神在任何时代都具有永恒的价值。新时代大学生应当从红岩精神中汲取力量，将个人理想融入国家发展大局。'),
  bodyText('三、心得体会'),
  bodyText('通过本次读书研讨会，我深刻认识到，中国革命的成功来之不易，是无数革命先烈用鲜血和生命换来的。《红岩》不仅仅是一部小说，更是一本生动的党史教材，它让我真切感受到什么叫"坚定的信仰"，什么叫"钢铁般的意志"。'),
  bodyText('作为新时代大学生，我深感自己肩负的责任与使命。我们虽然生活在和平年代，不需要像先辈那样在狱中进行生死斗争，但红岩精神所蕴含的坚定信念、顽强意志和奉献精神，依然是我们在学业和未来工作中需要坚守的力量源泉。'),
  bodyText('在今后的学习生活中，我将以红岩精神自勉，不畏艰难、勇于担当，努力成为堪当民族复兴大任的时代新人。同时，我也将带动身边同学共同阅读红色经典，让革命精神代代相传。'),
  pageBreak(),
];

// ====== 任务二 ======
const task2 = [
  taskTitle('二、场馆中的思政课——参观牡丹江革命纪念馆'),
  sectionTitle('【图片展示区】'),
  photoTable([
    ['图片2-1', '图片2-2'],
    ['图片2-3', '图片2-4（可选）'],
  ]),
  sectionTitle('【内容介绍与心得体会】'),
  bodyText('一、牡丹江革命纪念馆简介'),
  bodyText('牡丹江革命纪念馆位于牡丹江师范学院文科楼五楼，是牡丹江师范学院大学生思想政治理论课实践基地和爱国主义教育基地。纪念馆自2015年建成开放以来，始终致力于发掘、整理、研究和展示牡丹江地区的光辉革命历史，特别是作为抗战时期吉东特委所在地、东北抗联第四军、第五军诞生地的英勇斗争事迹。'),
  bodyText('二、参观过程与所见'),
  bodyText('在参观过程中，纪念馆丰富的历史文物与详实的图文资料将我带回了那个战火纷飞的年代。展馆中陈列的抗联战士使用过的武器、生活用品，以及大量珍贵的历史照片，无声地诉说着当年抗联战士在极其艰苦的条件下坚持抗日斗争的英雄事迹。'),
  bodyText('令我印象最深的是关于东北抗联第五军的专题展览。1931年"九一八事变"后，东北沦陷，在民族危亡的关键时刻，杨靖宇、赵尚志等抗日英雄在白山黑水间开展了艰苦卓绝的抗日游击战争。抗联战士们冬季在零下四十度的严寒中行军作战，以草根树皮充饥，充分展现了中华民族不屈不挠的抗争精神。'),
  bodyText('三、心得体会'),
  bodyText('这次参观给我最大的触动是：历史不是遥远的过去，而是永远照亮未来的灯塔。当我站在那些泛黄的照片和斑驳的文物前，仿佛能听到当年抗联战士冲锋的呐喊，能感受到他们坚定的信仰。十四年的东北抗战，是中华民族抵御外侮、争取独立自由的光辉历史，涌现出杨靖宇、赵尚志、赵一曼等一大批民族英雄。'),
  bodyText('作为生长在和平年代的大学生，我们不能忘记那段屈辱与抗争并存的历史，更不能忘记那些为民族解放事业献出宝贵生命的革命先烈。赓续红色血脉、传承革命精神，是我们每一个新时代大学生不可推卸的历史责任。我将以本次参观为契机，更加努力学习，增长本领，为实现中华民族伟大复兴贡献自己的青春力量。'),
  pageBreak(),
];

// ====== 任务三 ======
const task3 = [
  taskTitle('三、影像中的思政课——观看电影《建党伟业》'),
  sectionTitle('【图片展示区】'),
  photoTable([
    ['图片3-1', '图片3-2'],
    ['图片3-3', '图片3-4（可选）'],
  ]),
  sectionTitle('【内容介绍与心得体会】'),
  bodyText('一、影片概况'),
  bodyText('《建党伟业》是一部再现从辛亥革命到中国共产党成立这段波澜壮阔历史的大型红色影片。影片以宏大的叙事结构，展现了1911年辛亥革命爆发、1919年五四运动兴起、1921年中国共产党成立等一系列重大历史事件，刻画了一批为中华民族求解放、谋幸福的仁人志士的光辉形象。'),
  bodyText('二、观影感受'),
  bodyText('观看《建党伟业》，是一次深刻的精神洗礼。影片中，当看到辛亥革命成功后革命果实被袁世凯窃取，看到中国人民在帝国主义和封建主义的双重压迫下水深火热，我深感探索国家出路的艰辛与不易。'),
  bodyText('最令我动容的是中国共产党成立的历史时刻。13位平均年龄仅28岁的青年，代表全国50多名党员，在嘉兴南湖的红船上宣告了中国共产党的诞生。这一开天辟地的伟大事件，深刻改变了中华民族的前途命运。影片中那些热血青年以天下为己任、救国救民的壮举，是对当代大学生最生动的激励。'),
  bodyText('三、结合当代的思考'),
  bodyText('通过观影，我深刻认识到，中国共产党的成立是历史和人民的必然选择。在那个风雨如磐的年代，中国的先进分子经历了一次次失败和挫折，最终找到了马克思主义这一科学真理，选择了社会主义道路。'),
  bodyText('作为新时代大学生，我们应当思考：如何在和平年代传承建党精神？答案在于将个人命运与国家前途紧密相连，从先辈的奋斗中汲取精神力量，明确自身在新时代的使命。在当前实现中华民族伟大复兴中国梦的征程中，每一个青年都不是旁观者，而是参与者、建设者。我们要以史为鉴，开创未来，在学业上精益求精，在品德上严格要求，在实践中服务社会，用实际行动践行"请党放心，强国有我"的青春誓言。'),
  pageBreak(),
];

// ====== 任务四 ======
const task4 = [
  taskTitle('四、抗战十四年图片搜集'),
  sectionTitle('【图片展示区】'),
  photoTable([
    ['图片4-1', '图片4-2'],
    ['图片4-3', '图片4-4（可选）'],
  ]),
  sectionTitle('【内容介绍与心得体会】'),
  bodyText('一、图片搜集与选定'),
  bodyText('在搜集抗战十四年相关图片资料的过程中，我查阅了大量历史文献、档案资料和网络资源，最终选取了三幅最具代表性的作品进行展示介绍。'),
  bodyText('【图一：东北抗联战士雪地行军】'),
  bodyText('这幅照片记录了东北抗联战士在林海雪原中艰难行军的场景。拍摄时间约为1936年至1939年之间，拍摄地点为东北某山林地区。照片中战士们身着单薄棉衣，脚踏深雪，艰难跋涉在零下四十度的极寒环境中，充分展现了抗联战士"火烤胸前暖，风吹背后寒"的艰苦作战条件。该图片出自中国人民革命军事博物馆馆藏。'),
  bodyText('【图二：八路军伏击日军运输队】'),
  bodyText('这幅照片拍摄于1940年百团大战期间，记录了八路军某部在山西省境内伏击日军运输队的战斗场景。照片中我军战士依托有利地形，向敌人发起猛烈攻击，战斗场面紧张激烈。该图片出处：《中国人民解放军历史资料图集》。'),
  bodyText('【图三：日本投降仪式】'),
  bodyText('这幅照片记录了1945年9月2日日本在东京湾密苏里号战列舰上签署投降书的历史性时刻。照片中代表性场景庄严而肃穆，标志着中国抗日战争暨世界反法西斯战争的最终胜利。该图片出处：新华社历史档案。这一刻的到来，标志着中华民族取得了近代以来反抗外敌入侵的第一次完全胜利。'),
  bodyText('二、心得体会'),
  bodyText('通过这次图片搜集活动，我更加深刻地认识到抗日战争胜利的伟大意义。十四年的艰苦抗战，中国人民以伤亡3500万人的巨大代价换来了民族解放与国家独立。这段历史告诉我们：中华民族是一个不可战胜的伟大民族，任何外来侵略者最终都必将被英勇的中国人民所打败。'),
  bodyText('作为新时代大学生，我们要永远铭记这段历史，缅怀革命先烈，珍惜来之不易的和平生活，同时也要以史为鉴，面向未来，为实现中华民族的伟大复兴而不懈奋斗。抗战精神永远是我们克服一切艰难险阻的强大力量。'),
];

const doc = new Document({
  sections: [{
    properties: {
      page: {
        margin: {
          top: convertInchesToTwip(1.18),
          right: convertInchesToTwip(1.18),
          bottom: convertInchesToTwip(1.18),
          left: convertInchesToTwip(1.18),
        },
      },
    },
    children: [
      ...cover,
      ...task1,
      ...task2,
      ...task3,
      ...task4,
    ],
  }],
});

Packer.toBuffer(doc).then(buffer => {
  const outPath = '/home/admin/.openclaw/media/qqbot/downloads/2026春史纲学生实践报告.docx';
  fs.writeFileSync(outPath, buffer);
  console.log('Done: ' + outPath);
}).catch(err => {
  console.error('Error:', err);
  process.exit(1);
});
