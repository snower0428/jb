//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString;

@interface MTCoreTextLabel : UIView
{
    NSAttributedString *_attributedText;
    int _textAlignment;
}

@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize realSize;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
