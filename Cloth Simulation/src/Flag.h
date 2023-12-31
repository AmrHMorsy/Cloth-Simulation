#include "Pole.h"





class Flag{

private:

    bool simulate ;
    Parser * parser ;
    Skybox * skybox ;
    Shader * shader ;
    float time, fov ;
    progressbar * bar ;
    Cloth_Simulator * cloth_simulator ;
    std::vector<unsigned int> textures ;
    std::vector<std::string> file_paths ;
    int num_progress_bars, number_sand_patches ;
    glm::mat4 model, projection, view, model2, model3, model4, light_projection, light_view ;
    glm::vec3 light_color, camera, light_position, camera_front ;
    unsigned int vao, vbo, ebo, shader_program, number_of_indices, texture_indices_vbo ;

public:

    Flag(glm::mat4 v, glm::mat4 proj, glm::vec3 c, glm::vec3 front, float fv, progressbar*b, glm::mat4 lightproj, glm::mat4 lightview ) ;
    void set( Skybox * skybox ) ;
    void generate_buffers() ;
    void shade( unsigned int shadow_shader_program ) ;
    void shade( Shadow * shadow ) ;
    void bind_vertices( std::vector<float> vertices ) ;
    void update_time() ;
    void bind_indices( std::vector<unsigned int> indices ) ;
    void set_uniform_variables() ;
    void update_view( glm::vec3 camera, glm::mat4 v, glm::vec3 front ) ;
    void load_textures() ;
    void update_progress_bar( int num_bars ) ;
    void activate_textures() ;
    std::vector<float> get_vertices() ;
    void start_simulation() ;
    void generate_error( std::string msg ) ;
    ~Flag() ;
    
} ;
