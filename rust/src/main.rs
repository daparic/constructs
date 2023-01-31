
fn main() {
    /* OK
    let x = String::from("hi");
    println!("{}", x);
    */

    /* NOK
    let x = String::from("hi");
    let y = x;
    println!("{}", x);
    */

    /* OK
    let x = String::from("hi");
    let y = &x;
    println!("{}", x);
    */

    /* NOK
    let y = {
        let x = String::from("hi");
        &x
    };
    */
}

