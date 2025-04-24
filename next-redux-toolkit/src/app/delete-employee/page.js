"use client"
import React from 'react'
import { useDispatch, useSelector } from 'react-redux'
import styles from "../showEmp.module.css"
import { removeEmployee } from '../reduxToolkit/slice'
const page = () => {
  const data = useSelector((value) => value.employees)
  const dispatch = useDispatch()
  return (
    <>
      <h2>Delete employee</h2>
      {
        data.map((item) => (
          <div key={item.id}>
            <span key={item.id}>{item.name}</span>
            <button className={styles.button} onClick={() => dispatch(removeEmployee(item.id))}>Delete</button>
          </div>
        ))
      }
    </>
  )
}

export default page