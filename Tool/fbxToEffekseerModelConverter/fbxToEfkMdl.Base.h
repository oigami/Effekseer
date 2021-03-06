
#pragma once

#include <fbxsdk.h>

#include <string>
#include <vector>
#include <map>
#include <memory>
#include <functional>
#include <algorithm>

#include <assert.h>

namespace fbxToEfkMdl
{
	class FBXConverter;
	class Scene;
	class Node;
	class Mesh;

	class Node
	{
	public:
		std::string							Name;
		std::shared_ptr<Mesh>				MeshData;
		std::vector<std::shared_ptr<Node>>	Children;
	};

	struct Vertex
	{
		FbxVector4	Position;
		FbxVector4	Normal;
		FbxVector4	Tangent;
		FbxVector4	Binormal;
		FbxVector2	UV;
		FbxColor	VertexColor;

		bool operator<(const Vertex& r) const
		{
			auto& l = *this;
			if (l.Position[0] != r.Position[0]) return l.Position[0] < r.Position[0];
			if (l.Position[1] != r.Position[1]) return l.Position[1] < r.Position[1];
			if (l.Position[2]!= r.Position[2]) return l.Position[2] < r.Position[2];

			if (l.Normal[0] != r.Normal[0]) return l.Normal[0] < r.Normal[0];
			if (l.Normal[1] != r.Normal[1]) return l.Normal[1] < r.Normal[1];
			if (l.Normal[2] != r.Normal[2]) return l.Normal[2] < r.Normal[2];

			if (l.Tangent[0] != r.Tangent[0]) return l.Tangent[0] < r.Tangent[0];
			if (l.Tangent[1] != r.Tangent[1]) return l.Tangent[1] < r.Tangent[1];
			if (l.Tangent[2] != r.Tangent[2]) return l.Tangent[2] < r.Tangent[2];

			if (l.Binormal[0] != r.Binormal[0]) return l.Binormal[0] < r.Binormal[0];
			if (l.Binormal[1] != r.Binormal[1]) return l.Binormal[1] < r.Binormal[1];
			if (l.Binormal[2] != r.Binormal[2]) return l.Binormal[2] < r.Binormal[2];

			if (l.UV[0] != r.UV[0]) return l.UV[0] < r.UV[0];
			if (l.UV[1] != r.UV[1]) return l.UV[1] < r.UV[1];

			if (l.VertexColor.mRed != r.VertexColor.mRed) return l.VertexColor.mRed < r.VertexColor.mRed;
			if (l.VertexColor.mGreen != r.VertexColor.mGreen) return l.VertexColor.mGreen < r.VertexColor.mGreen;
			if (l.VertexColor.mBlue != r.VertexColor.mBlue) return l.VertexColor.mBlue < r.VertexColor.mBlue;
			if (l.VertexColor.mAlpha != r.VertexColor.mAlpha) return l.VertexColor.mAlpha < r.VertexColor.mAlpha;

			return false;
		}
	};

	struct Face
	{
		int32_t Index[3];
	
		Face()
		{
			Index[0] = -1;
			Index[1] = -1;
			Index[2] = -1;
		}
	};

	class Mesh
	{
	private:

	public:

		std::string			Name;

		std::vector<Vertex>	Vertexes;
		std::vector<Face>	Faces;
	};

	class Scene
	{
	public:
		std::shared_ptr<Node> Root;
	};
}