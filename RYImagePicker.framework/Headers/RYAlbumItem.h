//
//  RYAlbumItem.h
//  RYImagePicker
//
//  Created by Jason Li on 2018/11/29.
//  Copyright © 2018年 com.Royole. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>

NS_ASSUME_NONNULL_BEGIN

@interface RYAlbumItem : NSObject

/**相册名*/
@property (nonatomic, strong) NSString * albumName;
/**相册资源*/
@property (nonatomic, strong) PHFetchResult<PHAsset*> * fetchResult;

@end

NS_ASSUME_NONNULL_END
