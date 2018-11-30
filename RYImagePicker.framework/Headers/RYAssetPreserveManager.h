//
//  RYAssetPreserveManager.h
//  RYImagePicker
//
//  Created by Jason Li on 2018/11/29.
//  Copyright © 2018年 com.Royole. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>

NS_ASSUME_NONNULL_BEGIN

@interface RYAssetPreserveManager : NSObject

/**保存手机相册原图图片
 @param asset 图片资源
 @param finishPhotoHandle  成功回调  
 @param cancelPhotoHandel  取消回调
 */
-(void)resaveAlbumPhoto:(PHAsset *)asset
      finishPhotoHandle:(void(^)(NSString * filePath, UIImage * image, NSDictionary * info))finishPhotoHandle
      cancelPhotoHandel:(void(^)(NSError * error))cancelPhotoHandel;

/**保存压缩手机相册缩略图图片
 @param asset 图片资源
 @param path 路径
 @param finishThumbPhotoHandle 成功回调
 @param cancelThumbPhotoHandel  取消回调
 */
- (void)resaveAlbumThumbPhoto:(PHAsset *)asset
                         path:(NSString *)path
       finishThumbPhotoHandle:(void(^)(NSString * filePath, UIImage * image))finishThumbPhotoHandle
       cancelThumbPhotoHandel:(void(^)(NSError * error))cancelThumbPhotoHandel;

/**获取相册视频资源信息
 @param asset 图片资源
 @param finishVideoHandle  成功回调
 @param cancelVideoHandle  取消回调
 */
- (void)getAlbumVideoInfo:(PHAsset *)asset
       finishVideoHandle:(void(^)(NSString * filePath, AVAsset * avAsset, float videoSize))finishVideoHandle
       cancelVideoHandle:(void(^)(NSError * error))cancelVideoHandle;

/**保存手机相册视频
 @param asset 图片资源
 @param complete  成功回调
 @param errorBlock  取消回调
 */
- (void)resaveAlbumVideo:(PHAsset *)asset
                complete:(void(^)(NSString *filePath, NSString * indentStr))complete
              errorBlock:(void(^)(NSString * indentStr))errorBlock;


/**保存手机相册原视频缩略图图片
 @param asset 图片资源
 @param path 路径
 @param finishThumbVideoHandle 成功回调
 @param cancelThumbVideoHandle  取消回调
 */
- (void)rasaveAlbumThumbVideo:(PHAsset *)asset
                  andFilePath:(NSString *)path
       finishThumbVideoHandle:(void(^)(NSString * filePath, UIImage * image))finishThumbVideoHandle
       cancelThumbVideoHandle:(void(^)(NSError * error))cancelThumbVideoHandle;


@end

NS_ASSUME_NONNULL_END
