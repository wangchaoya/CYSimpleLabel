//
//  CYEmotionModel.h
//  simpleTextLabel
//
//  Created by 王超亚 on 2018/6/20.
//  Copyright © 2018年 王超亚. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSInteger, CYEmotionType) {
    kCYEmotionTypeEmoji = 0, //直接插入文本中的小图标
    kCYEmotionTypeFacial,    //静态表情
    kCYEmotionTypeFacialGif  //动态大话表情
};

@class CYEmotionGroupModel;

@interface CYEmotionModel : NSObject

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *imagePNG; //png资源名称
@property (nonatomic, copy) NSString *imageGIF;  //gif资源

@property (nonatomic) CYEmotionGroupModel *group; //所属的表情包

@property (nonatomic) NSString *codeId;  //表情ID

+ (instancetype)modelWithDictionary:(NSDictionary *)data;

@end

@interface CYEmotionGroupModel : NSObject

@property (nonatomic, copy) NSString *groupName;

@property (nonatomic) NSMutableArray<CYEmotionModel *> *allEmotionModels;

@property (nonatomic, copy) NSString *bundleName; //表情包所在的bundle

@property (nonatomic, copy) NSString *groupIconName; //对应表情键盘下面的滑动条按钮

@property (nonatomic) CYEmotionType type;

@end

