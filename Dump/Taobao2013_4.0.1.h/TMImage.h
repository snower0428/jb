//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@class NSString;

@interface TMImage : UIImage
{
    NSString *_imageName;
}

+ (id)createImageFromColor:(id)arg1 rect:(struct CGRect)arg2;
+ (id)imageNamed:(id)arg1 canUseJPG:(BOOL)arg2;
+ (id)imageNamed:(id)arg1;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)arg1 canUseJPG:(BOOL)arg2;

@end

