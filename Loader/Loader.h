#pragma once
#include <assimp\Importer.hpp>
#include <assimp\postprocess.h>
#include <assimp\scene.h>

#pragma comment(lib,"assimp.lib")

#define DEGUG 1

using namespace Assimp;

struct Mesh
{
	float *vecPos;
};

class Loader
{
public:
	Loader();
	~Loader();
	void populatePos(Mesh *mesh, unsigned int index);


	Importer importer;
	const aiScene *scene;
	
	aiMesh *mesh;
	aiVector3D vec;

	
};

