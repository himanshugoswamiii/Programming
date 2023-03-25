fn main(){
    let x = 20;
    println!("Value of x is : {x}");
    // x = 30; ERROR immutable by default
    let mut y = 30;
    println!("Value of y is : {y}");
    y = 50;
    println!("Value of y is : {y}");
}
