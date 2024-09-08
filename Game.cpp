#include "Game.h"

/// <summary>
/// Almacenamos la ventana del motor en la clase por si la necesitamos para algo
/// </summary>
/// <param name="window"></param>
void Game::InitGameWindow(sf::RenderWindow* window)
{
	_Window = window;
}

/// <summary>
/// En esta funcion se cargan las variables de inicio del juego
/// </summary>
void Game::InitVariables()
{
}

// Constructor donde se inizializa el juego
Game::Game()
{
	InitVariables();
}

/// <summary>
/// Funcion que se encarga de la logica del juego
/// </summary>
/// <param name="dt"> delta time </param>
void Game::Update(float dt)
{

}

/// <summary>
/// Funcion que se encarga de dibujar todos los elementos del juego
/// </summary>
/// <param name="renderer"></param>
void Game::Draw(Renderer& renderer)
{

}



