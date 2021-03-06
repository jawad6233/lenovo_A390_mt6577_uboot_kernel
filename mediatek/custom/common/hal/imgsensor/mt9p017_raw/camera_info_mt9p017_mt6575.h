#ifndef _CAMERA_INFO_MT9P017_H
#define _CAMERA_INFO_MT9P017_H

/********************************************************************************/
#define SENSOR_ID                           MT9P017_SENSOR_ID
#define SENSOR_DRVNAME                      SENSOR_DRVNAME_MT9P017_RAW
#define INCLUDE_FILENAME_ISP_REGS_PARAM     "camera_isp_regs_mt9p017_mt6575.h"
#define INCLUDE_FILENAME_ISP_PCA_PARAM      "camera_isp_pca_mt9p017_mt6575.h"

/*******************************************************************************
*   
********************************************************************************/

#if defined(ISP_SUPPORT)


#define MT9P017_CAMERA_AUTO_DSC CAM_AUTO_DSC
#define MT9P017_CAMERA_PORTRAIT CAM_PORTRAIT
#define MT9P017_CAMERA_LANDSCAPE CAM_LANDSCAPE
#define MT9P017_CAMERA_SPORT CAM_SPORT
#define MT9P017_CAMERA_FLOWER CAM_FLOWER
#define MT9P017_CAMERA_NIGHTSCENE CAM_NIGHTSCENE
#define MT9P017_CAMERA_DOCUMENT CAM_DOCUMENT
#define MT9P017_CAMERA_ISO_ANTI_HAND_SHAKE CAM_ISO_ANTI_HAND_SHAKE
#define MT9P017_CAMERA_ISO100 CAM_ISO100
#define MT9P017_CAMERA_ISO200 CAM_ISO200
#define MT9P017_CAMERA_ISO400 CAM_ISO400
#define MT9P017_CAMERA_ISO800 CAM_ISO800
#define MT9P017_CAMERA_ISO1600 CAM_ISO1600
#define MT9P017_CAMERA_VIDEO_AUTO CAM_VIDEO_AUTO
#define MT9P017_CAMERA_VIDEO_NIGHT CAM_VIDEO_NIGHT
#define MT9P017_CAMERA_NO_OF_SCENE_MODE CAM_NO_OF_SCENE_MODE

#endif
#endif
