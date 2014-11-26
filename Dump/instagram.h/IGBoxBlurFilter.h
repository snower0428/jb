//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGImageFilter.h"

@class IGSurface;

@interface IGBoxBlurFilter : IGImageFilter
{
    BOOL _needsConfigure;
    union _GLKVector2 _blurVector;
    IGSurface *_intermediateTexture;
    unsigned int _kernelSize;
}

@property(nonatomic) unsigned int kernelSize; // @synthesize kernelSize=_kernelSize;
- (void).cxx_destruct;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3;
- (void)configureProgram:(id)arg1;
- (id)fragmentShader;
- (id)fragmentFunctions;
- (id)fragmentShaderPrecision;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

