#include "Circles.hpp"

void Circles::setup() {
	for ( int i = 0; i < 5 + ofRandom(10); i++ ) {
		shape s = {
			ofRandom( 1000 ),
			ofRandom( 1000 ),
			ofRandom( 100 ),
			ofRandom( 255 ),
			ofRandom( 255 ),
			ofRandom( 255 )
		};
		this->shapes.push_back( s );
	}
}

void Circles::update() {

}

void Circles::draw() {
	for ( int i = 0; i < this->shapes.size(); i++ ) {
		shape s = this->shapes.at( i );
		ofSetColor( s.r , s.g , s.b );
		ofDrawCircle( s.x , s.x , s.r );
	}
}
