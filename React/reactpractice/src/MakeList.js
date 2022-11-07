import React from "react";
import {useState} from "react";
import styled from "styled-components";
import TodoList from "./TodoList";
import Weather from "./Weather";

const ListBox = styled.div`
  padding-top: 15vh;
  text-align: center;
  width: 18vw;
  height: 100vh;
`
const List = styled.div`
  font-family: 'Lato';
  font-style: normal;
  font-weight: 500;
  font-size: 22px;
  line-height: 26px;
  margin: 0px 23px 17px; 

  color: #525252;

  ${props => props.isSelected && `
  color: #EA5959;
  `
  }
`
const ContentBox = styled.div`
  width: 100%;
  padding: 2em;
  height: 637px;
  border-left: 1px solid #D8D8D8;
`

const Border = styled.div`
  position: absolute;
  width: 984px;
  height: 700px;
  left: 228px;
  top: 161px;

  background: #FFFFFF;
  box-shadow: 0px 10px 10px rgba(0, 0, 0, 0.25);
  border-radius: 8px;
  `

export default function ContentsList() {
  const [content, setContent] = useState('todo_list')
  const ListChange = (e, content) => {
    setContent(content)
  }

  return (
    <Border style={{display: "flex"}}>
      <ListBox>
        <List isSelected = {content === 'todo_list'} onClick={(e)=>ListChange(e, 'todo_list')}>Todo List</List>
        <List isSelected = {content === 'weather'} onClick={(e)=>ListChange(e, 'weather')}>Weather</List>
      </ListBox>
      <ContentBox>
        {content==="todo_list" ? <TodoList /> : null}
        {content==="weather" ? <Weather /> : null}
      </ContentBox>
    </Border>
  );
}