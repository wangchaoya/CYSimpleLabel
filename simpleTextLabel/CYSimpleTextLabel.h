//
//  CYSimpleTextLabel.h
//  simpleTextLabel
//
//  Created by 王超亚 on 2018/4/16.
//  Copyright © 2018年 王超亚. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CYLabelRichTextData;

typedef void(^CYLabelTapAction)(CYLabelRichTextData *data);

typedef void (^CYLabelLongPressAction)(CYLabelRichTextData *data, UIGestureRecognizerState state);

/**
 富文本类型

 - CYLabelRichTextTypeURL: url类型
 - CYLabelRichTextTypePhoneNumber: 电话类型
 */
typedef NS_ENUM(NSInteger, CYLabelRichTextType) {
    CYLabelRichTextTypeURL,
    CYLabelRichTextTypePhoneNumber
};

@interface CYLabelRichTextData : NSObject

@property (nonatomic, assign) NSRange range;

@property (nonatomic, assign) CYLabelRichTextType type;

@property (nonatomic, strong) NSURL *url;

@property (nonatomic, copy) NSString *phoneNumber;

- (instancetype)initWithType:(CYLabelRichTextType)type;

@end

/**
 *  实现的功能：
 *  1、可以识别电话号码，WebUrl、邮件
 *  2、以上链接支持点击、长按两种操作
 *  3、可以显示Emotion，可以设置字体、行间距
 */


@interface CYSimpleTextLabel : UITextView

@property (nonatomic, assign) CGFloat longPressDuration;

@property (nonatomic, copy) CYLabelTapAction tapAction;

@property (nonatomic, copy) CYLabelLongPressAction longPressAction;

- (BOOL)shouldReceiveTouchAtPoint:(CGPoint)ponit;

- (void)swallowTouch;

- (void)clearLinkBackground;

+ (NSMutableAttributedString *)createAttributedStringWithEmotionString:(NSString *)emotionString font:(UIFont *)font lineSpacing:(NSInteger)lineSpacing;


@end
