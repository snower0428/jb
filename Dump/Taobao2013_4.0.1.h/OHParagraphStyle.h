//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface OHParagraphStyle : NSObject <NSCopying>
{
    unsigned char _textAlignment;
    unsigned char _lineBreakMode;
    BOOL _baseWritingDirection;
    float _lineSpacing;
    float _paragraphSpacing;
    float _firstLineHeadIndent;
    float _headIndent;
    float _tailIndent;
    float _minimumLineHeight;
    float _maximumLineHeight;
    float _lineHeightMultiple;
    float _paragraphSpacingBefore;
}

+ (id)paragraphStyleWithCTParagraphStyle:(struct __CTParagraphStyle *)arg1;
+ (id)defaultParagraphStyle;
@property(nonatomic) float paragraphSpacingBefore; // @synthesize paragraphSpacingBefore=_paragraphSpacingBefore;
@property(nonatomic) float lineHeightMultiple; // @synthesize lineHeightMultiple=_lineHeightMultiple;
@property(nonatomic) float maximumLineHeight; // @synthesize maximumLineHeight=_maximumLineHeight;
@property(nonatomic) float minimumLineHeight; // @synthesize minimumLineHeight=_minimumLineHeight;
@property(nonatomic) BOOL baseWritingDirection; // @synthesize baseWritingDirection=_baseWritingDirection;
@property(nonatomic) float tailIndent; // @synthesize tailIndent=_tailIndent;
@property(nonatomic) float headIndent; // @synthesize headIndent=_headIndent;
@property(nonatomic) float firstLineHeadIndent; // @synthesize firstLineHeadIndent=_firstLineHeadIndent;
@property(nonatomic) unsigned char lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) unsigned char textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) float paragraphSpacing; // @synthesize paragraphSpacing=_paragraphSpacing;
@property(nonatomic) float lineSpacing; // @synthesize lineSpacing=_lineSpacing;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __CTParagraphStyle *)createCTParagraphStyle;
- (id)initWithCTParagraphStyle:(struct __CTParagraphStyle *)arg1;
- (id)init;

@end

