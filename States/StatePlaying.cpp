#include "StatePlaying.h"

#include "../Game.h"

StatePlaying::StatePlaying(Game& game) : StateBase(game) {
	m_window = &game.getWindow();
	m_view.reset(sf::FloatRect(0, 0, 1920, 1080));
	
	lvl.load("lvl/lvl.txt");
}

StatePlaying::~StatePlaying() {
}

void StatePlaying::handleInput() {

}

void StatePlaying::update(float d_time) {
	lvl.update(d_time);
}

void StatePlaying::render() {
	m_window->setView(m_view);
	m_window->draw(lvl);
}

void StatePlaying::debugRender() {

}

void StatePlaying::handleEvent(sf::Event& event) {

}