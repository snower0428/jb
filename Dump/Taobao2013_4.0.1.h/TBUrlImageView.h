//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TBUrlImageView : UIImageView
{
    NSString *_strUrl;
}

@property(retain, nonatomic) NSString *strUrl; // @synthesize strUrl=_strUrl;
- (void).cxx_destruct;
- (void)setImageUrl:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)setImageUrl:(id)arg1 placeHolderImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
