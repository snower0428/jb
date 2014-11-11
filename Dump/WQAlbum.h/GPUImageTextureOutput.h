//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPUImageInput.h"

@interface GPUImageTextureOutput : NSObject <GPUImageInput>
{
    BOOL enabled;
    id <GPUImageTextureOutputDelegate> _delegate;
    int _texture;
}

@property(nonatomic) BOOL enabled; // @synthesize enabled;
@property(readonly) int texture; // @synthesize texture=_texture;
@property(nonatomic) id <GPUImageTextureOutputDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(int)arg2;
- (void)setInputRotation:(int)arg1 atIndex:(int)arg2;
- (void)setInputTexture:(unsigned int)arg1 atIndex:(int)arg2;
- (int)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(int)arg2;
- (id)init;

@end
