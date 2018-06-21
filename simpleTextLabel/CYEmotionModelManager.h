//
//  CYEmotionModelManager.h
//  simpleTextLabel
//
//  Created by 王超亚 on 2018/6/20.
//  Copyright © 2018年 王超亚. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CYEmotionModel.h"
@interface CYEmotionModelManager : NSObject

@property (nonatomic) NSMutableArray<CYEmotionGroupModel *> *allEmotionGroups;

+ (instancetype)sharedManager;

- (void)prepareEmotionModel;

- (UIImage *)imageForEmotionModel:(CYEmotionModel *)model;

- (NSData *)gifDataForEmotionModel:(CYEmotionModel *)model;

- (NSData *)gifDataForEmotionGroup:(NSString *)groupName codeId:(NSString *)codeId;

- (NSRange)rangeOfEmojiAtEndOfString:(NSString *)string;

- (NSRange)rangeOfEmojiAtIndexOfString:(NSString *)string index:(NSInteger)index;

- (NSMutableAttributedString *)convertTextEmotionToAttachment:(NSString *)text font:(UIFont *)font;

@end
