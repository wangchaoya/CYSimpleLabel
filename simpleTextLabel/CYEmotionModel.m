//
//  CYEmotionModel.m
//  simpleTextLabel
//
//  Created by 王超亚 on 2018/6/20.
//  Copyright © 2018年 王超亚. All rights reserved.
//

#import "CYEmotionModel.h"

@implementation CYEmotionModel

+ (instancetype)modelWithDictionary:(NSDictionary *)data {
    CYEmotionModel *model = [CYEmotionModel new];
    
    model.text = data[@"text"];
    model.imagePNG = data[@"image"];
    model.imageGIF = data[@"imageGIF"];
    model.codeId = data[@"id"];
    
    return model;
}


@end

@implementation CYEmotionGroupModel

@end
