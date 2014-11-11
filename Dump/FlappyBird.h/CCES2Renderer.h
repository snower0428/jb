//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CCESRenderer.h"

@class EAGLContext;

__attribute__((visibility("hidden")))
@interface CCES2Renderer : NSObject <CCESRenderer>
{
    int backingWidth_;
    int backingHeight_;
    unsigned int samplesToUse_;
    BOOL multiSampling_;
    unsigned int depthFormat_;
    unsigned int pixelFormat_;
    unsigned int defaultFramebuffer_;
    unsigned int colorRenderbuffer_;
    unsigned int depthBuffer_;
    unsigned int msaaFramebuffer_;
    unsigned int msaaColorbuffer_;
    EAGLContext *context_;
}

@property(readonly, nonatomic) unsigned int msaaFramebuffer; // @synthesize msaaFramebuffer=msaaFramebuffer_;
@property(readonly, nonatomic) unsigned int msaaColorbuffer; // @synthesize msaaColorbuffer=msaaColorbuffer_;
@property(readonly, nonatomic) unsigned int colorRenderbuffer; // @synthesize colorRenderbuffer=colorRenderbuffer_;
@property(readonly, nonatomic) unsigned int defaultFramebuffer; // @synthesize defaultFramebuffer=defaultFramebuffer_;
@property(readonly, nonatomic) EAGLContext *context; // @synthesize context=context_;
- (void)dealloc;
- (unsigned int)msaaColorBuffer;
- (unsigned int)msaaFrameBuffer;
- (unsigned int)defaultFrameBuffer;
- (unsigned int)colorRenderBuffer;
- (id)description;
- (struct CGSize)backingSize;
- (BOOL)resizeFromLayer:(id)arg1;
- (id)initWithDepthFormat:(unsigned int)arg1 withPixelFormat:(unsigned int)arg2 withSharegroup:(id)arg3 withMultiSampling:(BOOL)arg4 withNumberOfSamples:(unsigned int)arg5;

@end

