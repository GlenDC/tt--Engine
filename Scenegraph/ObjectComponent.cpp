// Copyright � 2013 Tom Tondeur
// 
// This file is part of tt::Engine.
// 
// tt::Engine is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// tt::Engine is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with tt::Engine.  If not, see <http://www.gnu.org/licenses/>.

#include "ObjectComponent.h"

#include "SceneObject.h"

ObjectComponent::ObjectComponent():m_bActive(false){}
ObjectComponent::~ObjectComponent(){}
void ObjectComponent::Initialize(){}
void ObjectComponent::Update(const tt::GameContext& context){}
void ObjectComponent::Draw(const tt::GameContext& context){}

void ObjectComponent::SetActive(bool b)
{
	m_bActive = b;
}

bool ObjectComponent::IsActive(void) const
{
	return m_bActive;
}
