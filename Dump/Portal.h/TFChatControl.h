/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class TFChatBoardView, TFScene, TFChatInputView, UIView, UIViewController;

@interface TFChatControl : XXUnknownSuperclass {
@private
	TFChatInputView* _inputView;
	TFChatBoardView* _boardView;
	TFScene* _scene;
	int _chatType;
	UIViewController* _viewController;
}
@property(assign, nonatomic) __weak UIViewController* viewController;
@property(assign, nonatomic) int chatType;
@property(retain, nonatomic) TFScene* scene;
@property(retain, nonatomic) TFChatBoardView* boardView;
@property(retain, nonatomic) TFChatInputView* inputView;
@property(readonly, assign, nonatomic) UIView* view;
-(void).cxx_destruct;
-(void)paymentAction:(id)action;
-(void)sceneAction:(id)action;
-(BOOL)skipDownInputAnimation;
-(void)responseNotification:(id)notification;
-(void)removeObservers;
-(void)addObservers;
-(void)updateCustomSceneDescription:(id)description;
-(void)setSceneControllerDelegate:(id)delegate;
-(void)chatTypeChanged;
-(void)resignInputView;
-(void)showInputView:(BOOL)view;
-(void)dealloc;
-(id)initWithViewController:(id)viewController;
-(id)init;
@end
