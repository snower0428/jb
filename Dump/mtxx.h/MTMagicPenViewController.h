//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GLKViewDelegate.h"
#import "NRGridViewDataSource.h"
#import "NRGridViewDelegate.h"
#import "SDWebImageManagerDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"
#import "ShareViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class BackgroundCanvas, BeautyControl, CADisplayLink, EAGLContext, GLKView, NRGridView, NSArray, NSDictionary, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface MTMagicPenViewController : UIViewController <GLKViewDelegate, SKStoreProductViewControllerDelegate, UIGestureRecognizerDelegate, ShareViewControllerDelegate, NRGridViewDelegate, NRGridViewDataSource, SDWebImageManagerDelegate>
{
    unsigned int _vertexArray;
    unsigned int _vertexBuffer;
    BackgroundCanvas *_canvas;
    struct CGPoint currentPosition;
    int nStackIndex;
    int nStackCount;
    int _minStackCount;
    int _maxStackCount;
    struct dispatch_queue_s *_queue;
    int _currentMagicPenIndex;
    CADisplayLink *_displayLink;
    double _timeLastUpdate;
    id _resignActiveNotification;
    id _didBecomeActiveNotification;
    NSDictionary *_unlockInfo;
    GLKView *_glkView;
    NRGridView *_gridView;
    UIImageView *_courseImageView;
    UIImageView *_rightBarImageView;
    BeautyControl *_beautyControl;
    UIImage *_blurImage;
    id <PainterProtocol> _painter;
    id <PainterProtocol> _painterColor;
    EAGLContext *_context;
    NSArray *_magicPens;
    NSDictionary *_sharingDict;
}

@property(nonatomic) NSDictionary *sharingDict; // @synthesize sharingDict=_sharingDict;
@property(retain, nonatomic) NSArray *magicPens; // @synthesize magicPens=_magicPens;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(retain, nonatomic) id <PainterProtocol> painterColor; // @synthesize painterColor=_painterColor;
@property(retain, nonatomic) id <PainterProtocol> painter; // @synthesize painter=_painter;
@property(retain, nonatomic) UIImage *blurImage; // @synthesize blurImage=_blurImage;
@property(nonatomic) BeautyControl *beautyControl; // @synthesize beautyControl=_beautyControl;
@property(nonatomic) __weak UIImageView *rightBarImageView; // @synthesize rightBarImageView=_rightBarImageView;
@property(nonatomic) __weak UIImageView *courseImageView; // @synthesize courseImageView=_courseImageView;
@property(nonatomic) __weak NRGridView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic) __weak GLKView *glkView; // @synthesize glkView=_glkView;
- (void).cxx_destruct;
- (void)shareWechatFailedNotification:(id)arg1;
- (void)shareWechatSuccessNotification:(id)arg1;
- (void)didFinishShareWithShareViewController:(id)arg1 success:(BOOL)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)gridView:(id)arg1 didSelectCellAtIndexPath:(id)arg2;
- (id)gridView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)gridView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)pinchGesture:(id)arg1;
- (void)panGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)update;
- (void)tearDownGL;
- (void)setupGL;
- (void)renderForView;
- (void)done;
- (id)painterColorForInfo:(id)arg1;
- (id)painterForInfo:(id)arg1;
- (void)refreshUndoRedoButtonState;
- (void)actionCourse:(id)arg1;
- (void)actionDone:(id)arg1;
- (void)actionBack:(id)arg1;
- (void)actionRedo:(id)arg1;
- (void)actionUndo:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

@end

