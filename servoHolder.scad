servoHolder();
module servoHolder(){
    difference(){
        translate([0,5,0])
        cube([30,45,4], center=true);
        cube([12.5, 24,5], center=true);
        translate([0,23,0])
        cylinder(h=10,r=2, center=true,$fn=50);
        translate([10,23,0])
        cylinder(h=10,r=2, center=true,$fn=50);
        translate([-10,23,0])
        cylinder(h=10,r=2, center=true,$fn=50);
    }    
}
