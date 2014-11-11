//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAccelerometerDelegate.h"

__attribute__((visibility("hidden")))
@interface AccelerometerDispatcher : NSObject <UIAccelerometerDelegate>
{
    struct CCAccelerometerDelegate *delegate_;
    struct CCAcceleration *acceleration_;
}

+ (id)sharedAccelerometerDispather;
@property struct CCAcceleration *acceleration_; // @synthesize acceleration_;
@property struct CCAccelerometerDelegate *delegate_; // @synthesize delegate_;
- (void)accelerometer:(id)arg1 didAccelerate:(id)arg2;
- (void)setAccelerometerInterval:(float)arg1;
- (void)addDelegate:(struct CCAccelerometerDelegate *)arg1;
- (void)dealloc;
- (id)init;

@end

