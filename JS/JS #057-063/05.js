
function creatSelectBox(startYear, endYear) {
    
    document.write("<select>")
    for (let i = startYear; i <= endYear; i++){

        document.write(`<option value=${i}>${i}</option>`)
    }
    document.write("</select>")
}



creatSelectBox(2000,2021)