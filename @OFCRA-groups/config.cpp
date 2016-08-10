/* Declaration as Addon-Content.*/
class CfgPatches 		{
	class OFA_groups	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.1;
		requiredAddons[] = {};
	};
};


class CfgGroups {
	class West {
		class OFCRA {
			name="OFCRA";

			class Infantry {
				name = "Groupes d'Infanterie";
				class INF_CMDT2_01 {
					name = "Commandement (2)";
					class Unit01 {
						vehicle = "B_officer_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_officer_F";
						side = 1;
						position[] = {5,0,0};
					};
				};
				class INF_CMDT4_01 {
					name = "Commandement + Escorte (4)";
					class Unit01 {
						vehicle = "B_officer_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_support_AMG_F";
												side = 1;
						position[] = {5,-5,0};
					};
					class Unit03 {
						vehicle = "B_support_GMG_F";
												side = 1;
						position[]={-5,-5,0};
					};
					class Unit04 {
						vehicle="B_recon_F";
						side=1;
						position[]={0,-5,0};
					};
				};
				class INF_SNPR3_01 {
					name = "Sniper (3)";
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_spotter_F";
						side = 1;
						position[] = {5,-5,0};
					};
					class Unit03 {
						vehicle = "B_sniper_F";
						side = 1;
						position[] = {-5,-5,0};
					};
				};

				class INF_RECO_01 {
					name = "Reconnaissance (3)";
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_recon_F";
						side = 1;
						position[] = {5,-5,0};
					};
					class Unit03 {
						vehicle = "B_recon_F";
						side = 1;
						position[] = {-5,-5,0};
					};
				};

				class INF_FSPE4_01 {
					name = "Forces Speciales (4)";
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_soldier_AR_F";
						side = 1;
						position[] = {-5,-5,0};
					};
					class Unit03 {
						vehicle = "B_soldier_LAT_F";
						side = 1;
						position[] = {5,-5,0};
					};
					class Unit04 {
						vehicle = "B_recon_F";
						side = 1;
						position[] = {0,-5,0};
					};
				};

				class INF_SUPP4_01 {
					name = "Support Mitrailleur (4)";
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_support_AMG_F";
						side = 1;
						position[] = {5,-5,0};
					};
					class Unit03 {
						vehicle = "B_support_GMG_F";
						side = 1;
						position[] = {-5,-5,0};
					};
					class Unit04 {
						vehicle = "B_Soldier_TL_F";
						side = 1;
						position[] = {0,-5,0};
					};
				};

				class INF_SUPPO4_02 {
					name = "Support Demolition (4)";
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_soldier_exp_F";
						side = 1;
						position[] = {5,-5,0};
					};
					class Unit03 {
						vehicle = "B_soldier_exp_F";
						side = 1;
						position[] = {-5,-5,0};
					};
					class Unit04 {
						vehicle = "B_Soldier_TL_F";
						side = 1;
						position[] = {0,-5,0};
					};
				};
				class INF_SUPPO4_03 {
					name = "Support AT (4)";
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_soldier_AT_F";
						side = 1;
						position[] = {5,-5,0};
					};
					class Unit03 {
						vehicle = "B_soldier_AAT_F";
						side = 1;
						position[] = {-5,-5,0};
					};
					class Unit04 {
						vehicle = "B_Soldier_TL_F";
						side = 1;
						position[] = {0,-5,0};
					};
				};
				class INF_FSPE5_01 {
					name = "Forces Speciales (5)";
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_soldier_AR_F";
						side = 1;
						position[] = {-5,-5,0};
					};
					class Unit03 {
						vehicle = "B_soldier_LAT_F";
						side = 1;
						position[] = {5,-5,0};
					};
					class Unit04 {
						vehicle = "B_recon_F";
						side = 1;
						position[] = {0,-5,0};
					};
					class Unit05 {
						vehicle = "B_soldier_M_F";
						side = 1;
						position[] = {10,-5,0};
					};
				};
				class INF_SUPPO5_01 {
					name = "Support mixte (5)";
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_soldier_AT_F";
						side = 1;
						position[] = {5,-5,0};
					};
					class Unit03 {
						vehicle = "B_soldier_AR_F";
						side = 1;
						position[] = {-5,-5,0};
					};
					class Unit04 {
						vehicle = "B_Soldier_TL_F";
						side = 1;
						position[] = {0,-5,0};
					};
					class Unit05 {
						vehicle = "B_soldier_LAT_F";
						side = 1;
						position[] = {10,-5,0};
					};
				};
				class INF_CMBT6_01 {
					name = "Combat standard (6)";
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_Soldier_GL_F";
						side = 1;
						position[] = {5,-5,0};
					};
					class Unit03 {
						vehicle = "B_soldier_AR_F";
						side = 1;
						position[] = {5,-10,0};
					};
					class Unit04 {
						vehicle = "B_Soldier_TL_F";
						side = 1;
						position[] = {-5,-5,0};
					};
					class Unit05 {
						vehicle = "B_soldier_AR_F";
						side = 1;
						position[] = {-5,-10,0};
					};
					class Unit06 {
						vehicle = "B_medic_F";
						side = 1;
						position[] = {0,-10,0};
					};
				};

				class INF_CMBT8_01 {
					name = "Combat standard (8)";
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_Soldier_TL_F";
						side = 1;
						position[] = {5,-5,0};
					};
					class Unit03 {
						vehicle = "B_soldier_AR_F";
						side = 1;
						position[] = {5,-10,0};
					};
					class Unit04 {
						vehicle = "B_soldier_AT_F";
						side = 1;
						position[] = {10,-10,0};
					};
					class Unit05 {
						vehicle = "B_Soldier_TL_F";
						side = 1;
						position[] = {0,-10,0};
					};
					class Unit06 {
						vehicle = "B_soldier_M_F";
						side = 1;
						position[] = {-5,-5,0};
					};
					class Unit07 {
						vehicle = "B_medic_F";
						side = 1;
						position[] = {-5,-10,0};
					};
					class Unit08 {
						vehicle = "B_Soldier_F";
						side = 1;
						position[] = {-10,-10,0};
					};
				};

				class INF_CMBT12_01 {
					name = "Combat standard (12)";
					class Unit01 {
						vehicle = "B_Soldier_SL_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_Soldier_F";
						side = 1;
						position[] = {5,0,0};
					};
					class Unit03 {
						vehicle = "B_soldier_AR_F";
						side = 1;
						position[] = {-5,-5,0};
					};
					class Unit04 {
						vehicle = "B_Soldier_TL_F";
						side = 1;
						position[] = {0,-5,0};
					};
					class Unit05 {
						vehicle = "B_Soldier_TL_F";
						side = 1;
						position[] = {5,-5,0};
					};
					class Unit06 {
						vehicle = "B_soldier_AT_F";
						side = 1;
						position[] = {10,-5,0};
					};
					class Unit07 {
						vehicle = "B_soldier_AR_F";
						side = 1;
						position[] = {-10,-10,0};
					};
					class Unit08 {
						vehicle = "B_Soldier_TL_F";
						side = 1;
						position[] = {-5,-10,0};
					};
					class Unit09 {
						vehicle = "B_soldier_LAT_F";
						side = 1;
						position[] = {0,-10,0};
					};
					class Unit10 {
						vehicle = "B_soldier_M_F";
						side = 1;
						position[] = {5,-10,0};
					};
					class Unit11 {
						vehicle = "B_soldier_AR_F";
						side = 1;
						position[] = {10,-10,0};
					};
					class Unit12 {
						vehicle = "B_Soldier_F";
						side = 1;
						position[] = {15,-10,0};
					};
				};
			};

			class Armored {
				name = "Groupes Mecanises";
				class ARM_EQPG1_01 {
					name = "Equipage (2)";
					class Unit01 {
						vehicle = "B_diver_TL_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_crew_F";
						side = 1;
						position[] = {0,-5,0};
					};
				};
				class ARM_EQPG2_01 {
					name = "Equipage (3)";
					class Unit01 {
						vehicle = "B_diver_TL_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_crew_F";
						side = 1;
						position[] = {0,-5,0};
					};
					class Unit03 {
						vehicle = "B_crew_F";
						side = 1;
						position[] = {0,-10,0};
					};
				};
				class ARM_EQPG3_01 {
					name = "Equipage (4)";
					class Unit01 {
						vehicle = "B_diver_TL_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_crew_F";
						side = 1;
						position[] = {0,-5,0};
					};
					class Unit03 {
						vehicle = "B_crew_F";
						side = 1;
						position[] = {0,-10,0};
					};
					class Unit04 {
						vehicle = "B_crew_F";
						side = 1;
						position[] = {0,-15,0};
					};
				};
			};

			class Air {
				name = "Forces Aeriennes";
				class AIR_HELIC1_01 {
					name = "Equipage (2)";

					class Unit01 {
						vehicle = "B_Helipilot_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_helicrew_F";
						side = 1;
						position[] = {0,-5,0};
					};
				};
				class AIR_HELIC2_01 {
					name = "Equipage (3)";

					class Unit01 {
						vehicle = "B_Helipilot_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_helicrew_F";
						side = 1;
						position[] = {0,-5,0};
					};
					class Unit03 {
						vehicle = "B_helicrew_F";
						side = 1;
						position[] = {0,-10,0};
					};
				};
				class AIR_HELIC3_01 {
					name = "Equipage (4)";

					class Unit01 {
						vehicle = "B_Helipilot_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_helicrew_F";
						side = 1;
						position[] = {0,-5,0};
					};
					class Unit03 {
						vehicle = "B_helicrew_F";
						side = 1;
						position[] = {0,-10,0};
					};
					class Unit04 {
						vehicle = "B_helicrew_F";
						side = 1;
						position[] = {0,-15,0};
					};
				};
			};

			class Motorized {
				name = "Groupes Motorises"
				class MOT_EQPG1_01 {
					name = "Equipage (2)";
					class Unit01 {
						vehicle = "B_diver_TL_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_crew_F";
						side = 1;
						position[] = {0,-5,0};
					};
				};
				class MOT_EQPG2_01 {
					name = "Equipage (3)";
					class Unit01 {
						vehicle = "B_diver_TL_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_crew_F";
						side = 1;
						position[] = {0,-5,0};
					};
					class Unit03 {
						vehicle = "B_crew_F";
						side = 1;
						position[] = {0,-10,0};
					};
				};
				class MOT_EQPG3_01 {
					name = "Equipage (4)";
					class Unit01 {
						vehicle = "B_diver_TL_F";
						side = 1;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "B_crew_F";
						side = 1;
						position[] = {0,-5,0};
					};
					class Unit03 {
						vehicle = "B_crew_F";
						side = 1;
						position[] = {0,-10,0};
					};
					class Unit04 {
						vehicle = "B_crew_F";
						side = 1;
						position[] = {0,-15,0};
					};
				};
			};

		};
	};

	class East {
		class OFCRA {
			name="OFCRA";

			class Infantry {
				name = "Groupes d'Infanterie";
				class INF_CMDT2_01 {
					name = "Commandement (2)";
					class Unit01 {
						vehicle = "O_officer_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_officer_F";
						side = 0;
						position[] = {5,0,0};
					};
				};
				class INF_CMDT4_01 {
					name = "Commandement + Escorte (4)";
					class Unit01 {
						vehicle = "O_officer_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_soldier_M_F";
						side = 0;
						position[] = {5,-5,0};
					};
					class Unit03 {
						vehicle = "O_recon_F";
						side = 0;
						position[]={-5,-5,0};
					};
					class Unit04 {
						vehicle="O_recon_F";
						side=0;
						position[]={0,-5,0};
					};
				};
				class INF_MKSM4_01 {
					name = "Support Marksman (4)";
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_Soldier_TL_F";
						side = 0;
						position[] = {0,-5,0};
					};
					class Unit03 {
						vehicle = "O_soldier_M_F";
						side = 0;
						position[]={5,-5,0};
					};
					class Unit04 {
						vehicle="O_spotter_F";
						side = 0;
						position[]={-5,-5,0};
					};
				};
				class INF_SUPP4_01 {
					name = "Support AT (4)";
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_Soldier_TL_F";
						side = 0;
						position[] = {0,-5,0};
					};
					class Unit03 {
						vehicle = "O_Soldier_AT_F";
						side = 0;
						position[]={5,-5,0};
					};
					class Unit04 {
						vehicle="O_Soldier_AAT_F";
						side = 0;
						position[]={-5,-5,0};
					};
				};
				class INF_SUPP4_02 {
					name = "Support Mitrailleur (4)";
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_Soldier_TL_F";
						side = 0;
						position[] = {0,-5,0};
					};
					class Unit03 {
						vehicle = "O_support_GMG_F";
						side = 0;
						position[]={5,-5,0};
					};
					class Unit04 {
						vehicle="O_support_AMG_F";
						side = 0;
						position[]={-5,-5,0};
					};
				};
				class INF_SUPP4_03 {
					name = "Support Demolition (4)";
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_Soldier_TL_F";
						side = 0;
						position[] = {0,-5,0};
					};
					class Unit03 {
						vehicle = "O_soldier_exp_F";
						side = 0;
						position[]={5,-5,0};
					};
					class Unit04 {
						vehicle="O_soldier_exp_F";
						side = 0;
						position[]={-5,-5,0};
					};
				};
				class INF_SUPP4_05 {
					name = "Support mixte (4)";
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_Soldier_AT_F";
						side = 0;
						position[] = {0,-5,0};
					};
					class Unit03 {
						vehicle = "O_Soldier_AR_F";
						side = 0;
						position[]={5,-5,0};
					};
					class Unit04 {
						vehicle="O_Soldier_TL_F";
						side = 0;
						position[]={-5,-5,0};
					};
				};
				class INF_FSPE4_01 {
					name = "Forces Speciales (4)";
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_Soldier_AR_F";
						side = 0;
						position[] = {-5,-5,0};
					};
					class Unit03 {
						vehicle = "O_Soldier_LAT_F";
						side = 0;
						position[] = {0,-5,0};
					};
					class Unit04 {
						vehicle = "O_soldier_M_F";
						side = 0;
						position[] = {5,-5,0};
					};
				};
				class INF_CMBT5_01 {
					name = "Combat standard (5)";
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_Soldier_TL_F";
						side = 0;
						position[] = {-5,-5,0};
					};
					class Unit03 {
						vehicle = "O_medic_F";
						side = 0;
						position[] = {-5,-10,0};
					};
					class Unit04 {
						vehicle = "O_Soldier_AT_F";
						side = 0;
						position[] = {5,-5,0};
					};
					class Unit05 {
						vehicle = "O_support_GMG_F";
						side = 0;
						position[] = {5,-10,0};
					};
				};
				class INF_CMBT7_01 {
					name = "Combat standard (7)";
					class Unit01 {
						vehicle = "O_Soldier_SL_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_Soldier_TL_F";
						side = 0;
						position[] = {-5,-5,0};
					};
					class Unit03 {
						vehicle = "O_medic_F";
						side = 0;
						position[] = {0,-5,0};
					};
					class Unit04 {
						vehicle = "O_Soldier_AT_F";
						side = 0;
						position[] = {5,-5,0};
					};
					class Unit05 {
						vehicle = "O_Soldier_TL_F";
						side = 0;
						position[] = {-5,-10,0};
					};
					class Unit06 {
						vehicle = "O_soldier_M_F";
						side = 0;
						position[] = {0,-10,0};
					};
					class Unit07 {
						vehicle = "O_support_GMG_F";
						side = 0;
						position[] = {5,-10,0};
					};
				};
			};

			class Armored {
				name = "Groupes Mecanises";
				class ARM_EQPG1_01 {
					name = "Equipage (2)";
					class Unit01 {
						vehicle = "O_diver_TL_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_crew_F";
						side = 0;
						position[] = {0,-5,0};
					};
				};
				class ARM_EQPG2_01 {
					name = "Equipage (3)";
					class Unit01 {
						vehicle = "O_diver_TL_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_crew_F";
						side = 0;
						position[] = {0,-5,0};
					};
					class Unit03 {
						vehicle = "O_crew_F";
						side = 0;
						position[] = {0,-10,0};
					};
				};
				class ARM_EQPG3_01 {
					name = "Equipage (4)";
					class Unit01 {
						vehicle = "O_diver_TL_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_crew_F";
						side = 0;
						position[] = {0,-5,0};
					};
					class Unit03 {
						vehicle = "O_crew_F";
						side = 0;
						position[] = {0,-10,0};
					};
					class Unit04 {
						vehicle = "O_crew_F";
						side = 0;
						position[] = {0,-15,0};
					};
				};
			};

			class Air {
				name = "Forces Aeriennes";
				class AIR_HELIC1_01 {
					name = "Equipage (2)";
					class Unit01 {
						vehicle = "O_Helipilot_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_helicrew_F";
						side = 0;
						position[] = {0,-5,0};
					};
				};
				class AIR_HELIC2_01 {
					name = "Equipage (3)";
					class Unit01 {
						vehicle = "O_Helipilot_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_helicrew_F";
						side = 0;
						position[] = {0,-5,0};
					};
					class Unit03 {
						vehicle = "O_helicrew_F";
						side = 0;
						position[] = {0,-10,0};
					};
				};
				class AIR_HELIC3_01 {
					name = "Equipage seul (4)";

					class Unit01 {
						vehicle = "O_Helipilot_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_helicrew_F";
						side = 0;
						position[] = {0,-5,0};
					};
					class Unit03 {
						vehicle = "O_helicrew_F";
						side = 0;
						position[] = {0,-10,0};
					};
					class Unit04 {
						vehicle = "O_helicrew_F";
						side = 0;
						position[] = {0,-15,0};
					};
				};
			};

			class Motorized {
				name = "Groupes Motorises";
				class MOT_EQPG1_01 {
					name = "Equipage (2)";
					class Unit01 {
						vehicle = "O_diver_TL_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_crew_F";
						side = 0;
						position[] = {0,-5,0};
					};
				};
				class MOT_EQPG2_01 {
					name = "Equipage (3)";
					class Unit01 {
						vehicle = "O_diver_TL_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_crew_F";
						side = 0;
						position[] = {0,-5,0};
					};
					class Unit03 {
						vehicle = "O_crew_F";
						side = 0;
						position[] = {0,-10,0};
					};
				};
				class MOT_EQPG3_01 {
					name = "Equipage (4)";
					class Unit01 {
						vehicle = "O_diver_TL_F";
						side = 0;
						position[] = {0,0,0};
					};
					class Unit02 {
						vehicle = "O_crew_F";
						side = 0;
						position[] = {0,-5,0};
					};
					class Unit03 {
						vehicle = "O_crew_F";
						side = 0;
						position[] = {0,-10,0};
					};
					class Unit04 {
						vehicle = "O_crew_F";
						side = 0;
						position[] = {0,-15,0};
					};
				};
			};
		};
	};
};
