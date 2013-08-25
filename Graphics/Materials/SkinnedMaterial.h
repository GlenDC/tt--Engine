#pragma once

#include "../Material.h"
#include "../../Helpers/resrc_ptr.hpp"

class SkinnedMaterial : public Material
{
public:
	SkinnedMaterial(void);
	virtual ~SkinnedMaterial();
	
	virtual void UpdateEffectVariables(const tt::GameContext& context) override;
		
	void SetDiffuse(const std::tstring& diffuseFilename);
	void SetLightDirection(D3DXVECTOR3 lightDirection);
	void SetBoneTransforms(const std::vector<D3DXMATRIX>& boneTransforms);
	
	static const int MAX_NR_OF_BONES = 70;
private:
	tt::Vector3 m_vecLightDirection;

	resource_ptr<ID3D10ShaderResourceView> m_pTexture;

	std::vector<D3DXMATRIX> m_vecBoneTransforms;
	
	// -------------------------
	// Disabling default copy constructor and default 
	// assignment operator.
	// -------------------------
	SkinnedMaterial(const SkinnedMaterial& yRef);									
	SkinnedMaterial& operator=(const SkinnedMaterial& yRef);
};