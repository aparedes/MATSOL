//
//  SolutionsViewController.h
//  MATSOL
//
//  Created by Yoshiki  Vázquez  Baeza & Santiago Torres Arias on 11/06/10.
//  Copyright 2010 Polar Bears Nanotechnology Research ©. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Accelerate/Accelerate.h>
#import <QuartzCore/QuartzCore.h>
#import "MATSOLDefines.h"
#import "Parenthesis.h"

@interface SolutionsViewController : UIViewController <UIScrollViewDelegate>

@property (readwrite) __CLPK_complex *a;
@property (readwrite) __CLPK_complex *b;
@property (readwrite) int size;
@property (retain, nonatomic) NSMutableArray *labelsArray;
@property (retain, nonatomic) UIScrollView *layoutView;
@property (retain, nonatomic) UIView *container;

@end
