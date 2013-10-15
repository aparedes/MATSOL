//
//  BaseConverterViewController.h
//  MATSOL
//
//  Created by GIDA01 on 10/26/10.
//  Copyright 2010 Ingeniería Electrónica -Universidad Iberoamericana. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Conversor.h"
#import "MATSOLDefines.h"

@interface CopyableLabel : UILabel

@end

typedef enum{
	MBaseConverterButtonFrom=-1,
	MBaseConverterButtonTo=-2,
	MBaseConverterButtonDelete=-3
}MBaseConverterButton;

@interface BaseConverterViewController : UIViewController<UIActionSheetDelegate, UIPickerViewDelegate, UITextFieldDelegate>  {
	IBOutlet CopyableLabel *fromLabel;
	IBOutlet CopyableLabel *toLabel;
	
	IBOutlet UILabel *fromIndicator;
	IBOutlet UILabel *toIndicator;
	
	NSMutableArray *buttonsConverter;
	NSArray *_basesArray;
	Conversor *mainConverter;
	
    NSBundle *resourcesLocation;
    
	int _currentActionSheet;
	int _pickedBase;
    BOOL ip5;
}

@property (strong, nonatomic) IBOutlet UIImageView *backgroundImage;
@property (nonatomic, strong) IBOutlet CopyableLabel *fromLabel;
@property (nonatomic, strong) IBOutlet CopyableLabel *toLabel;
@property (nonatomic, strong) IBOutlet UILabel *fromIndicator;
@property (nonatomic, strong) IBOutlet UILabel *toIndicator;
@property (nonatomic, strong) NSMutableArray *buttonsConverter;
@property (nonatomic, strong) Conversor *mainConverter;
@property (nonatomic, strong) NSBundle *resourcesLocation;
-(void)typeStuff:(id)sender;
-(IBAction)fromOrTo:(id)sender;
-(void)lockButtons;

@end
