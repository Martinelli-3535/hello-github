import styled from "styled-components"

const TodoLists = [
  "Get a new helmet",
  "Purchase Milk & Corn Flakes",
  "Pay Mortgage",
  "Complete Assignments",
  "Replace laptop's screen"
]

const Title = styled.h1`
  font-family: 'Lato';
  font-style: normal;
  font-weight: 700;
  font-size: 31px;
  line-height: 37px;

  margin: 10px 0 30px 0;
  color: #000000;
`

const TodoInput = styled.input`
  width: 100%;
  font-size: 16px;
  font-weight: 500;
  background-color: #eee;
  border: 0;
  border-radius: .5em;
  box-sizing: border-box;
  padding: 1em;
`;

const Todo = styled.ul`
  display: flex;
  align-TodoLists: center;
  width: 100%;
  color: #555;
  padding: 0;
 
  &:hover:after {
    position: absolute;
    right: 2em;
    color: #e66;
    font-size: 20px;
    font-family: "Material Icons";
    content: "🗑";
  }
`;

const InputBtn = styled.input `
  appearance : none;
  margin-right: 0.5em;
  border: 1px solid #EA5959;
  border-radius: 8px;
  width: 20px;
  height: 19px;
  
  &:checked {
    border-color: transparent;
    background-image: url("data:image/svg+xml,%3csvg viewBox='0 0 16 16' fill='white' xmlns='http://www.w3.org/2000/svg'%3e%3cpath d='M5.707 7.293a1 1 0 0 0-1.414 1.414l2 2a1 1 0 0 0 1.414 0l4-4a1 1 0 0 0-1.414-1.414L7 8.586 5.707 7.293z'/%3e%3c/svg%3e");
    background-size: 100% 100%;
    background-position: 50%;
    background-repeat: no-repeat;
    background-color: #EA5959;
  }
`

export default function TodoList() {

  const handleBtnClick = () => {
    
  }

  return (
    <div>
      <Title>Todo List</Title>
      <TodoInput placeholder="Todo 내용을 입력해주세요."/>
      <div>
      {TodoLists.map((element) =>
        <Todo>
          <InputBtn 
            type='checkbox'
            onClick ={handleBtnClick}/> {element}
        </Todo>
      )}
      </div>
    </div>
  )
}



