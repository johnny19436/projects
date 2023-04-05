export function getMergeSortAnimations(array) {
    const animations = [];
    if (array.length <= 1) return array;
    const auxiliaryArray = array.slice();
    mergeSortHelper(array, 0, array.length - 1, auxiliaryArray, animations);
    return animations;
}
  
  function mergeSortHelper(
    mainArray,
    startIdx,
    endIdx,
    auxiliaryArray,
    animations,
  ) {
    if (startIdx === endIdx) return;
    const middleIdx = Math.floor((startIdx + endIdx) / 2);
    mergeSortHelper(auxiliaryArray, startIdx, middleIdx, mainArray, animations);
    mergeSortHelper(auxiliaryArray, middleIdx + 1, endIdx, mainArray, animations);
    doMerge(mainArray, startIdx, middleIdx, endIdx, auxiliaryArray, animations);
  }
  
  function doMerge(
    mainArray,
    startIdx,
    middleIdx,
    endIdx,
    auxiliaryArray,
    animations,
  ) {
    let k = startIdx;
    let i = startIdx;
    let j = middleIdx + 1;
    while (i <= middleIdx && j <= endIdx) {
      animations.push([i, j]);
      animations.push([i, j]);
      if (auxiliaryArray[i] <= auxiliaryArray[j]) {
        animations.push([k, auxiliaryArray[i]]);
        mainArray[k++] = auxiliaryArray[i++];
      } else {
        animations.push([k, auxiliaryArray[j]]);
        mainArray[k++] = auxiliaryArray[j++];
      }
    }
    while (i <= middleIdx) {
      animations.push([i, i]);
      animations.push([i, i]);
      animations.push([k, auxiliaryArray[i]]);
      mainArray[k++] = auxiliaryArray[i++];
    }
    while (j <= endIdx) {
      animations.push([j, j]);
      animations.push([j, j]);
      animations.push([k, auxiliaryArray[j]]);
      mainArray[k++] = auxiliaryArray[j++];
    }
  }

export function getBubbleSortAnimations(array){
    const animations = [];
    if (array.length <= 1) return array;
    for(let i=0;i<array.length;i++){
        for(let j=0;j<array.length-i-1;j++){
            animations.push([j,j+1]);
            animations.push([j,j+1]);
            if(array[j]>array[j+1]){
                animations.push([j,j+1,array[j+1],array[j]]);
                [array[j],array[j+1]]=[array[j+1],array[j]];
            }else{
                animations.push([j,j+1,array[j],array[j+1]]);
            }
        }
    }
    
    return animations;
}

export function getQuickSortAnimations(array) {
    const animations = [];
    if (array.length <= 1) return array;
    doQuickSort(array,0,array.length-1,animations);

    return animations;
}

function doQuickSort(array,front,end,animations){
    if(front<end){
        let pivot=partition(array,front,end,animations);
        doQuickSort(array,front,pivot-1,animations);
        doQuickSort(array,pivot+1,end,animations);
    }
}

function partition(array,front,end,animations){
    const pivot=array[end];
    let i=front-1;
    for(let j=front;j<end;j++){
        if(array[j]<pivot){
            i++;
            animations.push([i,j]);
            animations.push([i,j]);
            animations.push([i,j,array[j],array[i]]);
            [array[i],array[j]]=[array[j],array[i]];
        }else if(i!==-1){
            animations.push([i,j]);
            animations.push([i,j]);
            animations.push([i,i,array[i],array[i]]);
        }
    }
    i++;
    animations.push([i,end]);
    animations.push([i,end]);
    animations.push([i,end,array[end],array[i]]);
    [array[i],array[end]]=[array[end],array[i]];   

    return i;
}