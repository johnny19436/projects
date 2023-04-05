import React from 'react';
import * as Algorithms from '../sortingAlgorithms/sortingAlgorithm';
import './SortingVisualizer.css';

const PRIMARY_COLOR = 'turquoise';
const SECONDARY_COLOR = 'red';
const ANIMATION_SPEED_MS = 3;

export default class SortingVisualizer extends React.Component {
    constructor(props) {
      super(props);
  
      this.state = {
        array: [],
      };
    }
  
    componentDidMount() {
      this.resetArray();
    }
  
    resetArray() {
      const array = [];
      for (let i = 0; i < 150; i++) {
        array.push(randomIntFromInterval(5, 480));
      }
      this.setState({array});
    }

    mergeSort() {
        const animations = Algorithms.getMergeSortAnimations(this.state.array);
        const arrayBars = document.getElementsByClassName('array-bar');
        for (let i = 0; i < animations.length; i++) {
          const isColorChange = i % 3 !== 2;
          if (isColorChange) {
            const [barOneIdx, barTwoIdx] = animations[i];
            const color = i % 3 === 0 ? SECONDARY_COLOR : PRIMARY_COLOR;
            setTimeout(() => {
                arrayBars[barOneIdx].style.backgroundColor = color;
                arrayBars[barTwoIdx].style.backgroundColor = color;
            }, i * ANIMATION_SPEED_MS);
          } else {
            setTimeout(() => {
              const [barOneIdx, newHeight] = animations[i];
              arrayBars[barOneIdx].style.height = `${newHeight}px`;
            }, i * ANIMATION_SPEED_MS);
          }
        }
    }
    quickSort(){
        const animations=Algorithms.getQuickSortAnimations(this.state.array);
        const arrayBars=document.getElementsByClassName('array-bar');
        for(let i=0;i<animations.length;i++){
            const isColorChange = i % 3 !== 2;
            if (isColorChange) {
                const [barOneIdx, barTwoIdx] = animations[i];
                const color = i % 3 === 0 ? SECONDARY_COLOR : PRIMARY_COLOR;
                setTimeout(() => {
                    arrayBars[barOneIdx].style.backgroundColor = color;
                    arrayBars[barTwoIdx].style.backgroundColor = color;
                }, i * ANIMATION_SPEED_MS);
              } else {
                setTimeout(() => {
                  const [barOneIdx,barTwoIdx,barOneHeight,barTwoHeight] = animations[i];
                  arrayBars[barOneIdx].style.height = `${barOneHeight}px`;
                  arrayBars[barTwoIdx].style.height = `${barTwoHeight}px`;
                }, i * ANIMATION_SPEED_MS);
            }            
        }
    }
    heapSort(){
        
    }
    bubbleSort(){
        const animations=Algorithms.getBubbleSortAnimations(this.state.array);
        const arrayBars = document.getElementsByClassName('array-bar');
        for(let i=0;i<animations.length;i++){
            const isColorChange = i % 3 !== 2;
            if (isColorChange) {
                const [barOneIdx, barTwoIdx] = animations[i];
                const color = i % 3 === 0 ? SECONDARY_COLOR : PRIMARY_COLOR;
                setTimeout(() => {
                    arrayBars[barOneIdx].style.backgroundColor = color;
                    arrayBars[barTwoIdx].style.backgroundColor = color;
                }, i * ANIMATION_SPEED_MS);
              } else {
                setTimeout(() => {
                  const [barOneIdx,barTwoIdx,barOneHeight,barTwoHeight] = animations[i];
                  arrayBars[barOneIdx].style.height = `${barOneHeight}px`;
                  arrayBars[barTwoIdx].style.height = `${barTwoHeight}px`;
                }, i * ANIMATION_SPEED_MS);
              }            
        }
    }

    render() {
        const {array} = this.state;
    
        return (
            <div className="array-container">
                <div className="multi-button">
                    <button onClick={()=>this.resetArray()}>Grnerate New Array</button>
                    <button onClick={() => this.mergeSort()}>Merge Sort</button>
                    <button onClick={() => this.quickSort()}>Quick Sort</button>
                    <button onClick={() => this.heapSort()}>Heap Sort</button>
                    <button onClick={() => this.bubbleSort()}>Bubble Sort</button>
                </div>                
                {array.map((value, idx) => (
                    <div
                        className="array-bar"
                        key={idx}
                        style={{
                        height: `${value}px`,
                    }}></div>
                ))}                
            </div>
        );
    }
}

function randomIntFromInterval(min,max){
    return Math.floor(Math.random()*(max-min+1)+min);
}