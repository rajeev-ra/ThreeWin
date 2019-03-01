#include "stdafx.h"
#include "ShaderChunk.h"

#define SHADERMAP_INSERT(a) m_shaders.insert(std::make_pair(std::string("a"), std::string(a))) 

extern const char* alphamap_fragment;
extern const char* alphamap_pars_fragment;
extern const char* alphatest_fragment;
extern const char* aomap_fragment;
extern const char* aomap_pars_fragment;
extern const char* begin_vertex;
extern const char* beginnormal_vertex;
extern const char* bsdfs;
extern const char* bumpmap_pars_fragment;
extern const char* clipping_planes_fragment;
extern const char* clipping_planes_pars_fragment;
extern const char* clipping_planes_pars_vertex;
extern const char* clipping_planes_vertex;
extern const char* color_fragment;
extern const char* color_pars_fragment;
extern const char* color_pars_vertex;
extern const char* color_vertex;
extern const char* common;
extern const char* cube_uv_reflection_fragment;
extern const char* defaultnormal_vertex;
extern const char* displacementmap_pars_vertex;
extern const char* displacementmap_vertex;
extern const char* dithering_fragment;
extern const char* dithering_pars_fragment;
extern const char* emissivemap_fragment;
extern const char* emissivemap_pars_fragment;
extern const char* encodings_fragment;
extern const char* encodings_pars_fragment;
extern const char* envmap_fragment;
extern const char* envmap_pars_fragment;
extern const char* envmap_pars_vertex;
extern const char* envmap_physical_pars_fragment;
extern const char* envmap_vertex;
extern const char* fog_fragment;
extern const char* fog_pars_fragment;
extern const char* fog_pars_vertex;
extern const char* fog_vertex;
extern const char* gradientmap_pars_fragment;
extern const char* lightmap_fragment;
extern const char* lightmap_pars_fragment;
extern const char* lights_fragment_begin;
extern const char* lights_fragment_end;
extern const char* lights_fragment_maps;
extern const char* lights_lambert_vertex;
extern const char* lights_pars_begin;
extern const char* lights_phong_fragment;
extern const char* lights_phong_pars_fragment;
extern const char* lights_physical_fragment;
extern const char* lights_physical_pars_fragment;
extern const char* logdepthbuf_fragment;
extern const char* logdepthbuf_pars_fragment;
extern const char* logdepthbuf_pars_vertex;
extern const char* logdepthbuf_vertex;
extern const char* map_fragment;
extern const char* map_pars_fragment;
extern const char* map_particle_fragment;
extern const char* map_particle_pars_fragment;
extern const char* metalnessmap_fragment;
extern const char* metalnessmap_pars_fragment;
extern const char* morphnormal_vertex;
extern const char* morphtarget_pars_vertex;
extern const char* morphtarget_vertex;
extern const char* normal_fragment_begin;
extern const char* normal_fragment_maps;
extern const char* normalmap_pars_fragment;
extern const char* packing;
extern const char* premultiplied_alpha_fragment;
extern const char* project_vertex;
extern const char* roughnessmap_fragment;
extern const char* roughnessmap_pars_fragment;
extern const char* shadowmap_pars_fragment;
extern const char* shadowmap_pars_vertex;
extern const char* shadowmap_vertex;
extern const char* shadowmask_pars_fragment;
extern const char* skinbase_vertex;
extern const char* skinning_pars_vertex;
extern const char* skinning_vertex;
extern const char* skinnormal_vertex;
extern const char* specularmap_fragment;
extern const char* specularmap_pars_fragment;
extern const char* tonemapping_fragment;
extern const char* tonemapping_pars_fragment;
extern const char* uv2_pars_fragment;
extern const char* uv2_pars_vertex;
extern const char* uv2_vertex;
extern const char* uv_pars_fragment;
extern const char* uv_pars_vertex;
extern const char* uv_vertex;
extern const char* worldpos_vertex;

extern const char* background_frag;
extern const char* background_vert;
extern const char* cube_frag;
extern const char* cube_vert;
extern const char* depth_frag;
extern const char* depth_vert;
extern const char* distanceRGBA_frag;
extern const char* distanceRGBA_vert;
extern const char* equirect_frag;
extern const char* equirect_vert;
extern const char* linedashed_frag;
extern const char* linedashed_vert;
extern const char* meshbasic_frag;
extern const char* meshbasic_vert;
extern const char* meshlambert_frag;
extern const char* meshlambert_vert;
extern const char* meshmatcap_frag;
extern const char* meshmatcap_vert;
extern const char* meshphong_frag;
extern const char* meshphong_vert;
extern const char* meshphysical_frag;
extern const char* meshphysical_vert;
extern const char* normal_frag;
extern const char* normal_vert;
extern const char* points_frag;
extern const char* points_vert;
extern const char* shadow_frag;
extern const char* shadow_vert;
extern const char* sprite_frag;
extern const char* sprite_vert;

namespace THREE
{
	ShaderMap ShaderChunk::m_shaders;

	ShaderChunk::ShaderChunk()
	{
		if (0 == m_shaders.size())
		{
			SHADERMAP_INSERT(alphamap_fragment);
			SHADERMAP_INSERT(alphamap_pars_fragment);
			SHADERMAP_INSERT(alphatest_fragment);
			SHADERMAP_INSERT(aomap_fragment);
			SHADERMAP_INSERT(aomap_pars_fragment);
			SHADERMAP_INSERT(begin_vertex);
			SHADERMAP_INSERT(beginnormal_vertex);
			SHADERMAP_INSERT(bsdfs);
			SHADERMAP_INSERT(bumpmap_pars_fragment);
			SHADERMAP_INSERT(clipping_planes_fragment);
			SHADERMAP_INSERT(clipping_planes_pars_fragment);
			SHADERMAP_INSERT(clipping_planes_pars_vertex);
			SHADERMAP_INSERT(clipping_planes_vertex);
			SHADERMAP_INSERT(color_fragment);
			SHADERMAP_INSERT(color_pars_fragment);
			SHADERMAP_INSERT(color_pars_vertex);
			SHADERMAP_INSERT(color_vertex);
			SHADERMAP_INSERT(common);
			SHADERMAP_INSERT(cube_uv_reflection_fragment);
			SHADERMAP_INSERT(defaultnormal_vertex);
			SHADERMAP_INSERT(displacementmap_pars_vertex);
			SHADERMAP_INSERT(displacementmap_vertex);
			SHADERMAP_INSERT(dithering_fragment);
			SHADERMAP_INSERT(dithering_pars_fragment);
			SHADERMAP_INSERT(emissivemap_fragment);
			SHADERMAP_INSERT(emissivemap_pars_fragment);
			SHADERMAP_INSERT(encodings_fragment);
			SHADERMAP_INSERT(encodings_pars_fragment);
			SHADERMAP_INSERT(envmap_fragment);
			SHADERMAP_INSERT(envmap_pars_fragment);
			SHADERMAP_INSERT(envmap_pars_vertex);
			SHADERMAP_INSERT(envmap_physical_pars_fragment);
			SHADERMAP_INSERT(envmap_vertex);
			SHADERMAP_INSERT(fog_fragment);
			SHADERMAP_INSERT(fog_pars_fragment);
			SHADERMAP_INSERT(fog_pars_vertex);
			SHADERMAP_INSERT(fog_vertex);
			SHADERMAP_INSERT(gradientmap_pars_fragment);
			SHADERMAP_INSERT(lightmap_fragment);
			SHADERMAP_INSERT(lightmap_pars_fragment);
			SHADERMAP_INSERT(lights_fragment_begin);
			SHADERMAP_INSERT(lights_fragment_end);
			SHADERMAP_INSERT(lights_fragment_maps);
			SHADERMAP_INSERT(lights_lambert_vertex);
			SHADERMAP_INSERT(lights_pars_begin);
			SHADERMAP_INSERT(lights_phong_fragment);
			SHADERMAP_INSERT(lights_phong_pars_fragment);
			SHADERMAP_INSERT(lights_physical_fragment);
			SHADERMAP_INSERT(lights_physical_pars_fragment);
			SHADERMAP_INSERT(logdepthbuf_fragment);
			SHADERMAP_INSERT(logdepthbuf_pars_fragment);
			SHADERMAP_INSERT(logdepthbuf_pars_vertex);
			SHADERMAP_INSERT(logdepthbuf_vertex);
			SHADERMAP_INSERT(map_fragment);
			SHADERMAP_INSERT(map_pars_fragment);
			SHADERMAP_INSERT(map_particle_fragment);
			SHADERMAP_INSERT(map_particle_pars_fragment);
			SHADERMAP_INSERT(metalnessmap_fragment);
			SHADERMAP_INSERT(metalnessmap_pars_fragment);
			SHADERMAP_INSERT(morphnormal_vertex);
			SHADERMAP_INSERT(morphtarget_pars_vertex);
			SHADERMAP_INSERT(morphtarget_vertex);
			SHADERMAP_INSERT(normal_fragment_begin);
			SHADERMAP_INSERT(normal_fragment_maps);
			SHADERMAP_INSERT(normalmap_pars_fragment);
			SHADERMAP_INSERT(packing);
			SHADERMAP_INSERT(premultiplied_alpha_fragment);
			SHADERMAP_INSERT(project_vertex);
			SHADERMAP_INSERT(roughnessmap_fragment);
			SHADERMAP_INSERT(roughnessmap_pars_fragment);
			SHADERMAP_INSERT(shadowmap_pars_fragment);
			SHADERMAP_INSERT(shadowmap_pars_vertex);
			SHADERMAP_INSERT(shadowmap_vertex);
			SHADERMAP_INSERT(shadowmask_pars_fragment);
			SHADERMAP_INSERT(skinbase_vertex);
			SHADERMAP_INSERT(skinning_pars_vertex);
			SHADERMAP_INSERT(skinning_vertex);
			SHADERMAP_INSERT(skinnormal_vertex);
			SHADERMAP_INSERT(specularmap_fragment);
			SHADERMAP_INSERT(specularmap_pars_fragment);
			SHADERMAP_INSERT(tonemapping_fragment);
			SHADERMAP_INSERT(tonemapping_pars_fragment);
			SHADERMAP_INSERT(uv2_pars_fragment);
			SHADERMAP_INSERT(uv2_pars_vertex);
			SHADERMAP_INSERT(uv2_vertex);
			SHADERMAP_INSERT(uv_pars_fragment);
			SHADERMAP_INSERT(uv_pars_vertex);
			SHADERMAP_INSERT(uv_vertex);
			SHADERMAP_INSERT(worldpos_vertex);

			SHADERMAP_INSERT(background_frag);
			SHADERMAP_INSERT(background_vert);
			SHADERMAP_INSERT(cube_frag);
			SHADERMAP_INSERT(cube_vert);
			SHADERMAP_INSERT(depth_frag);
			SHADERMAP_INSERT(depth_vert);
			SHADERMAP_INSERT(distanceRGBA_frag);
			SHADERMAP_INSERT(distanceRGBA_vert);
			SHADERMAP_INSERT(equirect_frag);
			SHADERMAP_INSERT(equirect_vert);
			SHADERMAP_INSERT(linedashed_frag);
			SHADERMAP_INSERT(linedashed_vert);
			SHADERMAP_INSERT(meshbasic_frag);
			SHADERMAP_INSERT(meshbasic_vert);
			SHADERMAP_INSERT(meshlambert_frag);
			SHADERMAP_INSERT(meshlambert_vert);
			SHADERMAP_INSERT(meshmatcap_frag);
			SHADERMAP_INSERT(meshmatcap_vert);
			SHADERMAP_INSERT(meshphong_frag);
			SHADERMAP_INSERT(meshphong_vert);
			SHADERMAP_INSERT(meshphysical_frag);
			SHADERMAP_INSERT(meshphysical_vert);
			SHADERMAP_INSERT(normal_frag);
			SHADERMAP_INSERT(normal_vert);
			SHADERMAP_INSERT(points_frag);
			SHADERMAP_INSERT(points_vert);
			SHADERMAP_INSERT(shadow_frag);
			SHADERMAP_INSERT(shadow_vert);
			SHADERMAP_INSERT(sprite_frag);
			SHADERMAP_INSERT(sprite_vert);
		}
	}

	const char* ShaderChunk::GetShader(const char* id) const
	{
		ShaderMap::const_iterator itr = m_shaders.find(std::string(id));
		if (m_shaders.end() != itr)
			return itr->second.c_str();
		return nullptr;
	}
}