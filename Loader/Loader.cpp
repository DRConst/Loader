#include "Loader.h"


Loader::Loader()
{
	scene = importer.ReadFile("./untitled.dae", aiProcessPreset_TargetRealtime_Quality);
}


Loader::~Loader()
{
	
}


void Loader::populatePos(Mesh *myMesh, unsigned int index)
{
	mesh = scene->mMeshes[index];
	int size = mesh->mNumVertices;
	myMesh->vecPos = (float*)malloc(sizeof(float)* size * 3 + 1);
	for (int c = 0, i = 0; c < size + 1; c++)
	{
		vec = mesh->mVertices[c];
		myMesh->vecPos[i++] = vec[0];
		myMesh->vecPos[i++] = vec[1];
		myMesh->vecPos[i++] = vec[2];
	}

	int i = 0;
	if (DEGUG)
	{
		while (i < size * 3 + 1)
		{
			printf("%f %f %f \n", myMesh->vecPos[i++], myMesh->vecPos[i++], myMesh->vecPos[i++]);			
		}
	}
}
