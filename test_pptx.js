const PptxGenJS = require('pptxgenjs');
const pptx = new PptxGenJS();
console.log('methods:', Object.getOwnPropertyNames(Object.getPrototypeOf(pptx)).slice(0, 20));