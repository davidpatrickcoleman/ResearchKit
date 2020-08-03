//
//  ORKTextView.m
//  ResearchKit
//
//  Created by dave on 31/07/2020.
//  Copyright © 2020 researchkit.org. All rights reserved.
//
@import UIKit;
#import "ORKDefaultFont.h"
#import "ORKDefines.h"


NS_ASSUME_NONNULL_BEGIN

/**
 This is a base class, not being used directly.
 */
ORK_CLASS_AVAILABLE
@interface ORKTextView :  UITextView<ORKDefaultFont>

@end

@interface ORKTextView ()

- (void)init_ORKTextView;

- (void)updateAppearance;

@end

NS_ASSUME_NONNULL_END
