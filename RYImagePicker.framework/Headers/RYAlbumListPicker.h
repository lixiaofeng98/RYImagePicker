//
//  RYAlbumListPicker.h
//  RYImagePicker
//
//  Created by Jason Li on 2018/11/29.
//  Copyright © 2018年 com.Royole. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, RYImagePickerMediaType) {
    /**全部*/
    RYImagePickerMediaTypeAny = 0,
    /**图片*/
    RYImagePickerMediaTypeImage,
    /**视频*/
    RYImagePickerMediaTypeVideo
};


@class RYAlbumItem;

@interface RYAlbumListPicker : NSObject

/**请求类型
 @param mediaType 选择类型
 @param resultHandle 相册结果回调
 */
- (void)setMediaType:(RYImagePickerMediaType)mediaType
        resultHandle:(void(^)(NSArray *listArr))resultHandle;

@end

NS_ASSUME_NONNULL_END
