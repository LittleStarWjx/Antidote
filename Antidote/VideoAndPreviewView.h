//
//  VideoAndPreviewView.h
//  Antidote
//
//  Created by Chuong Vu on 8/11/15.
//  Copyright (c) 2015 dvor. All rights reserved.
//

#import <UIKit/UIKit.h>


@class VideoAndPreviewView;

@protocol VideoAndPreviewViewDelegate <NSObject>

@optional
- (void)videoAndPreviewViewTapped:(VideoAndPreviewView *)videoView;

@end

/**
 * View that holds both the video view and preview
 * This class is responsible for showing the video UI.
 * You can use this without having a video view. If it's not provided or
 * set to new, it will be a black view which is useful for sending video only mode.
 */

@interface VideoAndPreviewView : UIView

/**
 * Setting this to nil or leaving it nil will leave a
 * default black view.
 */
@property (strong, nonatomic) UIView *videoView;

/**
 * YES if the preview view is currently hidden, otherwise NO.
 */
@property (nonatomic, assign, readonly) BOOL previewViewHidden;

/**
 * Provide a preview layer to be added.
 * @param previewLayer Layer to add for preview video.
 * If previewLayer is nil, the preview view will be hidden.
 */
- (void)providePreviewLayer:(CALayer *)previewLayer;

@property (weak, nonatomic) id<VideoAndPreviewViewDelegate> delegate;

@end