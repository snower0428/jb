//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PainterProtocol.h"

@class GLProgram, GLTexture, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MagicPainter : NSObject <PainterProtocol>
{
    unsigned int verticesID;
    GLProgram *_program;
    GLTexture *_imageTexture;
    NSMutableArray *_points;
    NSMutableArray *_drawPoints;
    unsigned short *indexBuffer;
    struct _GLKVector2 *vertexBuffer;
    struct _GLKVector4 *colorBuffer;
    struct _GLKVector2 *texCoordBuffer;
    id <CanvasProtocol> _canvas;
    int _blendFuncSource;
    int _blendFuncDestination;
    float _opacity;
    float _minPointSize;
    float _maxPointSize;
    int _units_per_plot;
    BOOL _needSurfaceColor;
    int _source_x_blocks;
    int _source_y_blocks;
    float _currentPointSize;
    double _lastPointTime;
    float _currentPaintRate;
    float _middlePaintRate;
    float _lastPaintRate;
}

- (void).cxx_destruct;
- (BOOL)loadShadersWithName:(id)arg1;
- (void)clear;
- (void)calculateQuadCurveFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 withControl:(struct CGPoint)arg3 fromRate:(float)arg4 toRate:(float)arg5;
- (void)addPoint:(struct CGPoint)arg1;
- (void)paintWithFBOSize:(struct CGSize)arg1 imageRect:(struct CGRect)arg2;
- (void)setCanvas:(id)arg1;
- (void)resetPainter;
- (void)paintDown;
- (void)paintTo:(struct CGPoint)arg1;
- (void)paintUp;
- (void)updateWithDelta:(float)arg1;
- (void)show;
- (void)dealloc;
- (id)initWithMode:(int)arg1;

@end
