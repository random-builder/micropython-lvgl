/* ************************************************************
 * PRIVATE TYPES DEFINITION                                   *
 * ***********************************************************/

/**
 *
 */
typedef struct {
    lv_obj_t *btnEnterBack;
    lv_obj_t *btnUp;
    lv_obj_t *btnDown;
} screenYourScreen1Itens_t;

/**
 *
 */
typedef struct {
    lv_obj_t *btnEnterBack;
    lv_obj_t *btnUp;
    lv_obj_t *btnDown;
} screenYourScreen2Itens_t;

/**
 *
 */
typedef enum {
    SCREEN_YOUR_SCREEN_1 = 0,
    SCREEN_YOUR_SCREEN_2,
    SCREEN_YOUR_SCREEN_3,

    SCREEN_ENDINDEX,

    SCREEN_INVALID_VALUE,
} screensList_e;

/**
 *
 */
typedef struct {
    lv_obj_t *btnEnterBack;
    lv_obj_t *btnUp;
    lv_obj_t *btnDown;
} screenYourScreen3Itens_t;

/* ************************************************************
 * PRIVATE GLOBAL VARIABLES DEFINITION                        *
 * ***********************************************************/

static lv_obj_t *scrYourScreen1 = NULL;
static screenYourScreen1Itens_t screenYourScreen1Itens;

static lv_obj_t *scrYourScreen2 = NULL;
static screenYourScreen2Itens_t screenYourScreen2Itens;

static lv_obj_t *scrYourScreen3 = NULL;
static screenYourScreen3Itens_t screenYourScreen3Itens;

static screensList_e m_oldScreen = SCREEN_INVALID_VALUE;
static screensList_e m_curScreen = SCREEN_INVALID_VALUE;

/* ************************************************************
 * DEFINITION OF PRIVATE FUNCTIONS                            *
 * ***********************************************************/

void scrYourScreen1Init(void) {

    lv_obj_t *label;

    screenYourScreen1Itens.btnEnterBack = lv_btn_create(scrYourScreen1);

    lv_obj_align(screenYourScreen1Itens., LV_ALIGN_BOTTOM_LEFT, 0, 0);
    label = lv_label_create(screenYourScreen1Itens.);
    lv_label_set_text_fmt(label, "%s", "Test");
    lv_obj_center(label);
    lv_obj_set_size(screenYourScreen1Itens., lv_pct(33), lv_pct(16));
    lv_obj_set_style_bg_color(screenYourScreen1Itens., lv_color_black(), LV_PART_MAIN);
    lv_obj_set_style_text_color(label, lv_color_white(), 0);
}

/**
 *
 */
static void navigateToScreen(screensList_e screenToGo) {

    if (m_curScreen != screenToGo) {

        switch (screenToGo) {

        /**************************/
        case SCREEN_YOUR_SCREEN_1:
            scrYourScreen1Init();
            lv_disp_load_scr(scrYourScreen1);

            break;
            /**************************/
        case SCREEN_YOUR_SCREEN_2:
            scrYourScreen2Init();
            lv_disp_load_scr(scrYourScreen2);

            break;
            /**************************/
        case SCREEN_YOUR_SCREEN_3:
            scrYourScreen3Init();
            lv_disp_load_scr(scrYourScreen3);

            break;
            /**************************/
        default:
            break;
            /**************************/
        }

        m_oldScreen = m_curScreen;
        m_curScreen = screenToGo;

        switch (m_oldScreen) {

        /**************************/
        case SCREEN_YOUR_SCREEN_1:
            lv_obj_del(scrYourScreen1);
            break;
            /**************************/
        case SCREEN_YOUR_SCREEN_2:
            // if you use a timer, can delete here lv_timer_del(timerHandler);
            lv_obj_del(scrYourScreen2);
            break;
            /**************************/
        case SCREEN_YOUR_SCREEN_3:
            lv_obj_del(scrYourScreen3);
            break;
            /**************************/

        default:

            break;
        }
    }
}

// In your application you just need call the navigateToScreen() with properly screen like:

navigateToScreen( SCREEN_YOUR_SCREEN_1);
