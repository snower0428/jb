//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, EAGLSharegroup, GLProgram, NSMutableDictionary;

@interface GPUImageContext : NSObject
{
    NSMutableDictionary *shaderProgramCache;
    EAGLSharegroup *_sharegroup;
    EAGLContext *_context;
    GLProgram *_currentShaderProgram;
    struct dispatch_queue_s *_contextQueue;
}

+ (BOOL)supportsFastTextureUpload;
+ (struct CGSize)sizeThatFitsWithinATextureForSize:(struct CGSize)arg1;
+ (BOOL)deviceSupportsFramebufferReads;
+ (BOOL)deviceSupportsRedTextures;
+ (BOOL)deviceSupportsOpenGLESExtension:(id)arg1;
+ (int)maximumTextureUnitsForThisDevice;
+ (int)maximumTextureSizeForThisDevice;
+ (void)setActiveShaderProgram:(id)arg1;
+ (void)useImageProcessingContext;
+ (struct dispatch_queue_s *)sharedContextQueue;
+ (id)sharedImageProcessingContext;
+ (void *)contextKey;
@property(readonly, nonatomic) struct dispatch_queue_s *contextQueue; // @synthesize contextQueue=_contextQueue;
@property(retain, nonatomic) GLProgram *currentShaderProgram; // @synthesize currentShaderProgram=_currentShaderProgram;
- (void).cxx_destruct;
@property(readonly, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (id)createContext;
- (void)useSharegroup:(id)arg1;
- (id)programForVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;
- (void)presentBufferForDisplay;
- (id)init;

@end

