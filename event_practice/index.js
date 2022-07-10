const $div = document.querySelector('.container');
const $form = document.querySelector('form');
const $input = document.querySelector('input');
const $button = document.querySelector('button');

// 1. 이벤트 핸들러
// target.이벤트이름 = 콜백함수

$div.onclick = handleClick; // 콜백이라 호출기호 x

function handleClick () {
    console.log('clicked');
}