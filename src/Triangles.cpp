#include "Triangles.hpp"

void Triangles::setup(){
	ofBackground( 255 , 255 , 255 );
}

void Triangles::update(){
    
}

void Triangles::draw(){
	ofSetColor( 24 , 50 , 25 ); //Outline colour.
	ofNoFill(); //No colour filled in the shape.
	ofDrawTriangle( 450 , 100 , 100 , 700 , 800 , 700 ); //Created a triangle.

	ofSetColor( 34 , 44 , 25 ); //Outline colour.
	ofNoFill();
	ofDrawTriangle( 450 , 200 , 100 , 700 , 800 , 700 ); //Created a triangle.

	ofSetColor( 54 , 44 , 23 ); //Outline colour.
	ofNoFill();
	ofDrawTriangle( 450 , 300 , 100 , 700 , 800 , 700 ); //Created a triangle.

	ofSetColor( 54 , 44 , 23 ); //Outline colour.
	ofNoFill();
	ofDrawTriangle( 450 , 400 , 100 , 700 , 800 , 700 ); //Created a triangle.

	ofSetColor( 54 , 44 , 23 ); //Outline colour.
	ofNoFill();
	ofDrawTriangle( 450 , 500 , 100 , 700 , 800 , 700 ); //Created a triangle.

	ofSetColor( 54 , 44 , 23 ); //Outline colour.
	ofNoFill();
	ofDrawTriangle( 450 , 600 , 100 , 700 , 800 , 700 ); //Created a triangle.

	ofSetColor( 54 , 44 , 23 ); //Outline colour.
	ofNoFill();
	ofDrawTriangle( 100 , 100 , 450 , 500 , 800 , 100 ); //Created a triangle.

	ofSetColor( 54 , 44 , 23 ); //Outline colour.
	ofNoFill();
	ofDrawTriangle( 100 , 100 , 450 , 400 , 800 , 100 ); //Created a triangle.

	ofSetColor( 54 , 44 , 23 ); //Outline colour.
	ofNoFill();
	ofDrawTriangle( 100 , 100 , 450 , 300 , 800 , 100 ); //Created a triangle.

	ofSetColor( 54 , 44 , 23 ); //Outline colour.
	ofNoFill();
	ofDrawTriangle( 100 , 100 , 450 , 200 , 800 , 100 ); //Created a triangle.

	ofSetColor( 54 , 44 , 23 ); //Outline colour.
	ofNoFill();
	ofDrawTriangle( 100 , 100 , 450 , 100 , 800 , 100 ); //Created a triangle.

}
