#include "minunit.h"
#include "mu_suites.h"
#include <stdio.h>

#if PLATFORM == mac
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#include <sys/time.h>
#else
#include <windows.h>    
#include "GL.H"
#include "GLU.H"
#include "GLAUX.H"
#include "GLUT.H"
#endif

int tests_number; 
int failed_number;
char error_msg[256];

int main( int argc, char* argv[] )
{
    glutInit(&argc,argv);
    glutInitWindowSize( 800, 600 );
    glutInitWindowPosition( 0, 0 );
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutCreateWindow("Render Demo");

    //GLfloat fAspect = screenWidth / screenHeight;
    //gluPerspective(45.0f, fAspect, 0.5, 10.0);
    // glMatrixMode(GL_MODELVIEW);
    //glViewport(0,0,screenWidth,screenHeight);
    /* glutMouseFunc(myMouse); */
    /* // glutMouseWheelFunc(myMouseWheel); */
    /* glutReshapeFunc( myReshape ); */
    /* glutKeyboardFunc(myKeyboard); */
    /* glutSpecialFunc( mySpecialKeyboard ); */
    /* /\* glutPassiveMotionFunc( mouse_motion ); *\/ */
    /* /\* if( true ) *\/ */
    /* if( RENDERTEST_FRAMEBUFFER_TEXTURE == global_cmd ) { */
    /*     glutDisplayFunc(render_to_texture); */
    /* } else { */
    /*     glutDisplayFunc(myDisplayAnimCallback); */
    /* } */
    /* /\* else *\/ */
    /* /\*     glutDisplayFunc(myDisplayCallback); *\/ */
    /* glutIdleFunc( myIdleCallback ); */
    /* glutMainLoop(); */

    /* list_suites(); */
    /* graph_suites(); */
    /* math_suites(); */
    /* edt_suites(); */
    /* graphic_suites(); */
    /* cornerdetector_suites(); */
    /* image_suites(); */
    /* scene_builder_suites(); */
    /* videocache_suites(); */
    /* utf_suites(); */
    /* storagepool_suites(); */
    /* binarytree_suites(); */
    /* txttextureatlas_suites(); */
    /* txtfont_suites(); */
    /* array_suites(); */
    /* topo_suites(); */
    /* recognition_suites(); */
    /* desctable_suites(); */
    /* comic_subframe_detector_suites(); */
    /* thinning_suites(); */
    /* edgedetector_suites(); */
    /* seed_region_growing_suites(); */
    /* comic_suites(); */
    /* panellogparser_suites(); */
    /* comicsubframe_suites(); */
    /* project_suites(); */
    /* comicmeta_suites(); */
    /* matrix_suites(); */
    /* gdi_suites(); */
    /* /\* myudatabase_suites(); *\/ */
    /* asynchronous_process_suites(); */
    /* json_suites(); */
    /* /\* myslogdump_suites(); *\/ */
    /* /\* table_mycuser_suites(); *\/ */
    /* /\* table_mycoperationrecords_suites(); *\/ */
    /* /\* table_mycoperationlog_suites(); *\/ */
    /* activecontour_suites(); */
    /* hash_suites(); */
    /* guibase_suites (); */
    /* freetype_suites (); */
    /* objparser_suites (); */
    /* terrain_suites (); */
    /* meshutil_suites (); */
    /* highway_suites (); */
    /* string_suites(); */
    /* types_suites (); */
    /* sort_suites (); */
    /* geometry_suites (); */
    /* bin_packing_suites(); */
    /* tree_suites(); */
    /* sgr_core_nodes_suites (); */
    /* post_base_suites (); */
    /* post_empty_suites (); */
    /* post_output_suites (); */
    /* post_alpha_over_suites (); */
    /* effect_alpha_over_suites (); */
    /* sgr_nodes_3d_suites (); */
    /* sgr_vbo_mesh_suites (); */
    /* gridmap_suites (); */
    svgio_suites ();
    if(0==failed_number)
        printf ( "total run %d suites, %d test, ALL PASSED\n", 5, tests_number );
    else
        printf ( "total run %d suites, %d test, %d failed\n", 5, tests_number, failed_number );
    return 0;
}
