//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseCell.h"

@class NSString, UIImageView, UILabel;

@interface MTShareCodeCell : MTBaseCell
{
    NSString *_code;
    UIImageView *_checkView;
    UILabel *_codeLabel;
}

@property(retain, nonatomic) UILabel *codeLabel; // @synthesize codeLabel=_codeLabel;
@property(retain, nonatomic) UIImageView *checkView; // @synthesize checkView=_checkView;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1;
- (id)initWithStyle:(int)arg1;

@end

