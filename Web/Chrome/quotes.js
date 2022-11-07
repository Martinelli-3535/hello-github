const quotes = [
    {
        quote: "자신을 믿지 않는 녀석 따위는 노력할 가치도 없다!",
        author: "마이트 가이",
    },
    {
        quote:"꿈은 도망가지 않아 도망가는 것은 언제나 나 자신이지",
        author: "신형만",
    },
    {
        quote: "다른 사람들이 오기만을 기다릴 수 없어. 네가 먼저 다가가야 해",
        author: "곰돌이 푸",
    },
    {
        quote: "의미 없는 것을 잔뜩하는것이 인생이란다.",
        author: "마루코",
    },
    {
        quote: "다른 사람의 욕을 그대로 믿는 건 그 욕을 말한 사람만큼이나 나쁜거야",
        author: "보노보노",
    },
    {
        quote: "포기하는 순간 시합은 이미 진거다",
        author: "슬램덩크"
    },
    {
        quote: "죽으러 가는게 아니야 내가 정말 살아있는지 확인하러 가는거야",
        author: "카우보이 비밥"
    }
]

const quote = document.querySelector('#quote span:first-child');
const author = document.querySelector('#quote span:last-child');

const RandomNumber = Math.floor(Math.random()*quotes.length);

quote.innerText = quotes[RandomNumber].quote;
author.innerText = quotes[RandomNumber].author;

