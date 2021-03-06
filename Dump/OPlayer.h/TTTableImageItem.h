//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableTextItem.h"

@class NSString, TTStyle, UIImage;

@interface TTTableImageItem : TTTableTextItem
{
    NSString *_imageURL;
    UIImage *_defaultImage;
    TTStyle *_imageStyle;
}

+ (id)itemWithText:(id)arg1 imageURL:(id)arg2 defaultImage:(id)arg3 imageStyle:(id)arg4 URL:(id)arg5;
+ (id)itemWithText:(id)arg1 imageURL:(id)arg2 defaultImage:(id)arg3 URL:(id)arg4;
+ (id)itemWithText:(id)arg1 imageURL:(id)arg2 URL:(id)arg3;
+ (id)itemWithText:(id)arg1 imageURL:(id)arg2;
@property(retain, nonatomic) TTStyle *imageStyle; // @synthesize imageStyle=_imageStyle;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

